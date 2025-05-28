library(ggplot2)

data(iris)

summary(iris)

aggregate(. ~ Species, data = iris[,1:5], FUN = function(x) {
  c(mean = mean(x), 
    sd = sd(x), 
    median = median(x))
})

cor(iris[, 1:4])

par(mfrow=c(2,2))
for(i in 1:4) {hist(iris[,i], main=names(iris)[i], xlab=names(iris)[i], col="skyblue", border="black")}

par(mfrow=c(2,2))
for(i in 1:4) {boxplot(iris[,i] ~ iris$Species, main=names(iris)[i],xlab="Species", ylab=names(iris)[i],col="lightblue")}

par(mfrow=c(1,1))
pairs(iris[1:4], col = as.numeric(iris$Species),pch = 19,main = "Scatter Plot Matrix of Iris Data")

ggplot(iris, aes(x = Sepal.Length, y = Sepal.Width, color = Species)) +
  geom_point(alpha = 0.6) +
  geom_smooth(method = "lm", se = TRUE) +
  labs(title = "Sepal Length vs Width by Species",
       x = "Sepal Length",
       y = "Sepal Width") +
  theme_minimal()