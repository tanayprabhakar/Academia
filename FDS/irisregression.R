library(ggplot2)
library(plotly)
library(ggfortify)
library(dplyr)
data(iris)
head(iris)

p <- ggplot(iris, aes(x = Petal.Width, y = Petal.Length)) +
  geom_point(color = "#FF6F61", alpha = 0.8, size = 3) +  # Coral points
  geom_smooth(method = "lm", color = "#0077B6", fill = "#90E0EF", se = TRUE, lwd = 1.2) +  # Blue regression line
  labs(
    title = "Petal Length vs Petal Width",
    x = "Petal Width (cm)",
    y = "Petal Length (cm)"
  ) +
  theme_minimal(base_family = "Arial") + 
  theme(
    plot.background = element_rect(fill = "#F4F4F4", color = NA),  # Light gray background
    panel.background = element_rect(fill = "#F4F4F4", color = NA),
    panel.grid.major = element_line(color = "#D3D3D3"),
    panel.grid.minor = element_line(color = "#E0E0E0"),
    axis.text = element_text(color = "#333333"),
    axis.title = element_text(face = "bold", color = "#222222")
  )

ggplotly(p)

model1 <- lm(Petal.Length ~ Petal.Width, data = iris)


new_data <- data.frame(Petal.Width = seq(min(iris$Petal.Width),
                                         max(iris$Petal.Width),
                                         length.out = 50))

predictions <- predict(model1, newdata = new_data, interval = "confidence")
new_data <- cbind(new_data, predictions)

ggplot(iris, aes(x = Petal.Width, y = Petal.Length)) +
  geom_point(color = "#2A9D8F", alpha = 0.7, size = 2.5, shape = 16) +  # Stylish point shape
  geom_smooth(method = "lm", color = "#E63946", fill = "#F4A261", se = TRUE, lwd = 1.2) +  
  labs(title = "Petal Length vs Petal Width with Confidence Intervals",
       x = "Petal Width (cm)", y = "Petal Length (cm)") +
  theme_minimal(base_size = 14) +
  theme(
    plot.background = element_rect(fill = "#F1FAEE", color = NA),
    panel.grid.major = element_line(color = "gray80"),
    panel.grid.minor = element_blank(),
    axis.title = element_text(face = "bold", size = 12, color = "#1D3557"),
    plot.title = element_text(face = "bold", size = 14, color = "#1D3557")
  )

cooksd <- cooks.distance(model1)
iris$cooksd <- cooksd  

ggplot(iris, aes(x = 1:nrow(iris), y = cooksd, fill = cooksd)) +
  geom_bar(stat = "identity", alpha = 0.8) +
  scale_fill_viridis_c(option = "magma") +  # Better color contrast
  geom_hline(yintercept = 4/nrow(iris), color = "red", linetype = "dashed", lwd = 1) +
  labs(title = "Cook's Distance for Influential Observations",
       x = "Observation Index", y = "Cook's Distance") +
  theme_minimal(base_size = 14) +
  theme(
    legend.position = "none",
    plot.background = element_rect(fill = "#F1FAEE", color = NA),
    panel.grid.major = element_line(color = "gray80"),
    panel.grid.minor = element_blank(),
    axis.title = element_text(face = "bold", size = 12, color = "#1D3557"),
    plot.title = element_text(face = "bold", size = 14, color = "#1D3557")
  )


influential_point <- which.max(cooksd)
iris_clean <- iris[-influential_point, ]
model1_clean <- lm(Petal.Length ~ Petal.Width, data = iris_clean)

ggplot() +
  geom_point(data = iris, aes(x = Petal.Width, y = Petal.Length), color = "#2A9D8F", alpha = 0.7, size = 2.5) +
  geom_smooth(data = iris, aes(x = Petal.Width, y = Petal.Length), method = "lm", color = "#E63946", se = FALSE, lwd = 1.2) +
  geom_smooth(data = iris_clean, aes(x = Petal.Width, y = Petal.Length), method = "lm", color = "#264653", se = FALSE, lwd = 1.2) +
  labs(title = "Petal Length vs Petal Width:\nWith and Without Influential Observation",
       x = "Petal Width (cm)", y = "Petal Length (cm)") +
  theme_minimal(base_size = 14) +
  annotate("text", x = 2.5, y = 4, label = "Red: All Data\nDark Blue: Without Influential Obs", color = "black", size = 5) +
  theme(
    plot.background = element_rect(fill = "#F1FAEE", color = NA),
    panel.grid.major = element_line(color = "gray80"),
    panel.grid.minor = element_blank(),
    axis.title = element_text(face = "bold", size = 12, color = "#1D3557"),
    plot.title = element_text(face = "bold", size = 14, color = "#1D3557")
  )


new_obs <- data.frame(Petal.Width = 1.5)
pred_int <- predict(model1, newdata = new_obs, interval = "prediction")

cat("95% Prediction Interval for Petal.Width = 1.5 cm: [",
    round(pred_int[2], 2), ",", round(pred_int[3], 2), "]\n")
