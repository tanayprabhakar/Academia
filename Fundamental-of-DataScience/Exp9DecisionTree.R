library(rpart)
library(rpart.plot)

data(iris)

str(iris)
set.seed(123)

sampleIndex <- sample(1:nrow(iris), 0.7 * nrow(iris))
trainData <- iris[sampleIndex, ]
testData <- iris[-sampleIndex, ]

treeModel <- rpart(Species ~ ., data = trainData, method = "class")

rpart.plot(treeModel, type = 2, extra = 104, fallen.leaves = TRUE, main = "Decision Tree for Iris Dataset")

predictions <- predict(treeModel, testData, type = "class")

confusionMatrix <- table(Predicted = predictions, Actual = testData$Species)
print(confusionMatrix)

accuracy <- sum(diag(confusionMatrix)) / sum(confusionMatrix)

cat("Accuracy on test data:", round(accuracy * 100, 2), "%\n")
