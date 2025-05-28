library(datasets)  
library(ggplot2) 
library(cluster) 
library(factoextra)
library(stats)

data(iris)

head(iris)
summary(iris)

iris_features <- iris[, 1:4]

iris_scaled <- scale(iris_features)

# K-MEANS CLUSTERING
set.seed(11)
km_result <- kmeans(iris_scaled, centers = 3, nstart = 25)

iris_km <- cbind(iris, cluster = km_result$cluster)

# Visualize the clustering results
ggplot(iris_km, aes(x = Sepal.Length, y = Sepal.Width, color = as.factor(cluster))) +
  geom_point(size = 3) +
  labs(title = "K-means Clustering of Iris Dataset (k=3)",
       x = "Sepal Length", 
       y = "Sepal Width",
       color = "Cluster") +
  theme_minimal()

# Compare clustering results with actual species
comparison_table <- table(iris_km$Species, iris_km$cluster)
print("Comparison of K-means clusters with actual species:")
print(comparison_table)

# HIERARCHICAL CLUSTERING

# Compute distance matrix
dist_matrix <- dist(iris_scaled, method = "euclidean")

# Perform hierarchical clustering using complete linkage
hc_complete <- hclust(dist_matrix, method = "complete")

# Plot the dendrogram
plot(hc_complete, main = "Hierarchical Clustering Dendrogram", 
     xlab = "Observation", ylab = "Height", cex = 0.6)

# Add rectangle around the three clusters
rect.hclust(hc_complete, k = 3, border = "red")
hc_clusters <- cutree(hc_complete, k = 3)
iris_hc <- cbind(iris, hc_cluster = hc_clusters)

# Visualize hierarchical clusters
ggplot(iris_hc, aes(x = Sepal.Length, y = Sepal.Width, color = as.factor(hc_cluster))) +
  geom_point(size = 3) +
  labs(title = "Hierarchical Clustering of Iris Dataset (k=3)",
       x = "Sepal Length", 
       y = "Sepal Width",
       color = "Cluster") +
  theme_minimal()

# Compare hierarchical clusters with actual species
hc_comparison <- table(iris_hc$Species, iris_hc$hc_cluster)
print("Comparison of Hierarchical clusters with actual species:")
print(hc_comparison)

