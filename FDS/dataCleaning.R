data("airquality")
library(mice)
library(VIM)
library(ggplot2)
library(dplyr)
head(airquality)

cat("Total NA values in the dataset: ", sum(is.na(airquality)))

summary(airquality)

cat("Total Missing values wrt to columns: ", colSums(is.na(airquality)))

removedRow <- na.omit(airquality) 
head(removedRow)


airquality_clean <- airquality
mean_ozone <- mean(airquality_clean$Ozone, na.rm = TRUE)
airquality_clean$Ozone[is.na(airquality_clean$Ozone)] <- mean_ozone
sum(is.na(airquality$Ozone))
sum(is.na(airquality_clean$Ozone))


airquality_multi <- airquality
airquality_knn <- airquality


multi_imp <- mice(airquality_multi, m=5, method='pmm', printFlag=FALSE)
airquality_multi <- complete(multi_imp, 1)
sum(is.na(airquality$Ozone))
sum(is.na(airquality_multi$Ozone))

airquality_knn <- kNN(airquality_knn, k=5)
airquality_knn <- airquality_knn[, 1:6]
sum(is.na(airquality$Ozone))
sum(is.na(airquality_multi$Ozone))


boxplot(airquality) 



calculate_zscore <- function(x) {
  (x - mean(x, na.rm = TRUE)) / sd(x, na.rm = TRUE)
}

scatter_plot <- ggplot(airquality, aes(x = Temp, y = Ozone)) +
  geom_point(alpha = 0.6) +
  geom_smooth(method = "lm", se = FALSE, color = "red") +
  labs(title = "Scatter Plot: Ozone vs Temperature",
       x = "Temperature (°F)",
       y = "Ozone (ppb)") +
  theme_minimal()

boxplot_ozone <- ggplot(airquality, aes(y = Ozone)) +
  geom_boxplot(fill = "lightblue") +
  labs(title = "Box Plot of Ozone Levels",
       y = "Ozone (ppb)") +
  theme_minimal()

boxplot_solar <- ggplot(airquality, aes(y = Solar.R)) +
  geom_boxplot(fill = "lightgreen") +
  labs(title = "Box Plot of Solar Radiation",
       y = "Solar Radiation") +
  theme_minimal()

ozone_q1 <- quantile(airquality$Ozone, 0.25, na.rm = TRUE)
ozone_q3 <- quantile(airquality$Ozone, 0.75, na.rm = TRUE)
ozone_iqr <- ozone_q3 - ozone_q1
ozone_lower <- ozone_q1 - 1.5 * ozone_iqr
ozone_upper <- ozone_q3 + 1.5 * ozone_iqr

outliers_analysis <- airquality %>%
  mutate(
    Ozone_zscore = calculate_zscore(Ozone),
    Solar.R_zscore = calculate_zscore(Solar.R),
    Wind_zscore = calculate_zscore(Wind),
    Temp_zscore = calculate_zscore(Temp)
  )

outliers_zscore <- outliers_analysis %>%
  filter(abs(Ozone_zscore) > 3 | 
           abs(Solar.R_zscore) > 3 |
           abs(Wind_zscore) > 3 |
           abs(Temp_zscore) > 3)

outliers_iqr <- airquality %>%
  filter(Ozone > ozone_upper | Ozone < ozone_lower)

cat("\nOutlier Analysis Summary:\n")
cat("\nIQR Boundaries for Ozone:")
cat("\nLower bound:", ozone_lower)
cat("\nUpper bound:", ozone_upper)
cat("\n\nNumber of outliers detected:")
cat("\nUsing Z-score method (|z| > 3):", nrow(outliers_zscore))
cat("\nUsing IQR method (Ozone only):", nrow(outliers_iqr))

print(scatter_plot)
print(boxplot_ozone)
print(boxplot_solar)
