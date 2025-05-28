# Load required libraries
library(ggplot2)
library(dplyr)

# Load the iris dataset (it's built into R)
data(iris)

# Example 1: Sepal Length vs Sepal Width
# Fit linear regression model
sepal_model <- lm(Sepal.Length ~ Sepal.Width, data=iris)

# Print model summary
cat("\nExample 1: Sepal Length vs Sepal Width Analysis\n")
cat("-------------------------------------------\n")
summary(sepal_model)

# Create visualization
sepal_plot <- ggplot(iris, aes(x=Sepal.Width, y=Sepal.Length, color=Species)) +
  geom_point(alpha=0.6) +
  geom_smooth(method='lm', color='red', se=TRUE) +
  labs(title='Sepal Length vs Sepal Width',
       subtitle='Simple Linear Regression',
       x='Sepal Width (cm)',
       y='Sepal Length (cm)') +
  theme_minimal()

# Example 2: Petal Length vs Petal Width
# Fit linear regression model
petal_model <- lm(Petal.Length ~ Petal.Width, data=iris)

# Print model summary
cat("\nExample 2: Petal Length vs Petal Width Analysis\n")
cat("-------------------------------------------\n")
summary(petal_model)

# Create visualization
petal_plot <- ggplot(iris, aes(x=Petal.Width, y=Petal.Length, color=Species)) +
  geom_point(alpha=0.6) +
  geom_smooth(method='lm', color='red', se=TRUE) +
  labs(title='Petal Length vs Petal Width',
       subtitle='Simple Linear Regression',
       x='Petal Width (cm)',
       y='Petal Length (cm)') +
  theme_minimal()

# Example 3: Making Predictions
# Create new data for predictions
new_measurements <- data.frame(
  Sepal.Width = c(3.0, 3.5, 4.0),
  Petal.Width = c(1.0, 1.5, 2.0)
)

# Make predictions
sepal_predictions <- predict(sepal_model, 
                             newdata=data.frame(Sepal.Width=new_measurements$Sepal.Width), 
                             interval="prediction")
petal_predictions <- predict(petal_model, 
                             newdata=data.frame(Petal.Width=new_measurements$Petal.Width), 
                             interval="prediction")

# Print predictions
cat("\nExample 3: Predictions\n")
cat("--------------------\n")
cat("\nSepal Length Predictions:\n")
print(sepal_predictions)
cat("\nPetal Length Predictions:\n")
print(petal_predictions)

# Example 4: Model Diagnostics
# Function to create diagnostic plots
create_diagnostic_plots <- function(model, title) {
  par(mfrow=c(2,2))
  plot(model, main=title)
  par(mfrow=c(1,1))
}

cat("\nExample 4: Model Diagnostics\n")
cat("-------------------------\n")
create_diagnostic_plots(sepal_model, "Sepal Measurements Model Diagnostics")
create_diagnostic_plots(petal_model, "Petal Measurements Model Diagnostics")

# Example 5: Model Evaluation and Comparison
calculate_metrics <- function(model) {
  rsquared <- summary(model)$r.squared
  adj_rsquared <- summary(model)$adj.r.squared
  rmse <- sqrt(mean(model$residuals^2))
  
  cat("\nModel Evaluation Metrics:\n")
  cat("R-squared:", rsquared, "\n")
  cat("Adjusted R-squared:", adj_rsquared, "\n")
  cat("RMSE:", rmse, "\n")
}

cat("\nExample 5: Model Evaluation\n")
cat("-------------------------\n")
cat("\nSepal Measurements Model Metrics:\n")
calculate_metrics(sepal_model)
cat("\nPetal Measurements Model Metrics:\n")
calculate_metrics(petal_model)

# Example 6: Species-Specific Analysis
# Analyze regression relationships within each species
for(species in unique(iris$Species)) {
  species_data <- iris[iris$Species == species,]
  
  # Fit models for this species
  species_sepal_model <- lm(Sepal.Length ~ Sepal.Width, data=species_data)
  species_petal_model <- lm(Petal.Length ~ Petal.Width, data=species_data)
  
  cat(sprintf("\nRegression Analysis for %s:\n", species))
  cat("\nSepal Measurements:\n")
  print(summary(species_sepal_model)$coefficients)
  cat("\nPetal Measurements:\n")
  print(summary(species_petal_model)$coefficients)
}