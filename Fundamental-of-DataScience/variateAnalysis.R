library(mlbench)    
library(ggplot2)
library(GGally)
library(dplyr)

data("PimaIndiansDiabetes")
df <- PimaIndiansDiabetes

summary(df)


numeric_vars <- names(df)[sapply(df, is.numeric)]

for(var in numeric_vars) {
  print(
    ggplot(df, aes(x = !!sym(var))) +
      geom_histogram(aes(y = ..density..), bins = 30, fill = "skyblue", color = "black") +
      geom_density(color = "red", linewidth = 1) +
      labs(title = paste("Distribution of", var), x = var) +
      theme_minimal()
  )
}

for(var in numeric_vars) {
  print(
    ggplot(df, aes(y = !!sym(var))) +
      geom_boxplot(fill = "orange", color = "darkorange") +
      labs(title = paste("Boxplot of", var), y = var) +
      theme_minimal()
  )
}

ggplot(df, aes(x = diabetes, fill = diabetes)) +
  geom_bar() +
  labs(title = "Distribution of Diabetes Outcomes", x = "Diabetes Status") +
  theme_minimal()

for(var in numeric_vars) {
  print(
    ggplot(df, aes(x = diabetes, y = !!sym(var), fill = diabetes)) +
      geom_boxplot() +
      labs(title = paste(var, "vs Diabetes Status"), y = var) +
      theme_minimal()
  )
}

ggpairs(df[, numeric_vars], 
        progress = FALSE,
        upper = list(continuous = wrap("cor", size = 3)),
        lower = list(continuous = "smooth"))

cor_matrix <- cor(df[, numeric_vars])
print(round(cor_matrix, 2))


ggplot(df, aes(x = glucose, y = age, color = diabetes)) +
  geom_point(alpha = 0.6) +
  geom_smooth(method = "lm", se = FALSE) +
  labs(title = "Interaction between Glucose and Age by Diabetes Status") +
  theme_minimal()