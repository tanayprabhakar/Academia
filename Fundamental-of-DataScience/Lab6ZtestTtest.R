library(ggplot2)
library(dplyr)
library(car)
library(lmtest)
library(MASS)

# Load the Iris dataset
data(iris)

# Create a linear regression model: Predict Petal.Length using Petal.Width
model1 <- lm(Petal.Length ~ Petal.Width, data = iris)

# Identify influential points using Cook's Distance
cooksd <- cooks.distance(model1)

# Define threshold for Cook's Distance (commonly 4/n, where n is the number of observations)
thresh <- 4 / nrow(iris)

# Filter out influential observations
cleaned_iris <- iris[cooksd < thresh, ]

# Refit the model without influential points
model2 <- lm(Petal.Length ~ Petal.Width, data = cleaned_iris)

# Hypothesis Testing

# 1. Linearity Test (ANOVA comparison)
model1_cleaned <- lm(Petal.Length ~ Petal.Width, data = cleaned_iris)
anova_test <- anova(model1_cleaned, model2)
print(anova_test)

# 6. Overall Model Significance (F-test)
summary_model <- summary(model2)
print(summary_model)

# 7. Individual Coefficient Significance (t-tests)
print(summary_model$coefficients)

# Visualization: Scatter plot with regression lines
plot <- ggplot(cleaned_iris, aes(x = Petal.Width, y = Petal.Length)) +
  geom_point(color = 'blue') +
  geom_smooth(method = 'lm', color = 'red', se = FALSE) +
  labs(title = 'Petal Length vs Petal Width (After Removing Influential Points)',
       x = 'Petal Width (cm)',
       y = 'Petal Length (cm)')

print(plot)
