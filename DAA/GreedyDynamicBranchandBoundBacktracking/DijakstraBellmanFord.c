#include <stdio.h>
#include <limits.h>

#define V 5

int findMinDistance(int dist[], int visited[]) {
    int min = INT_MAX, minIndex = -1;
    for (int v = 0; v < V; v++) {
        if (!visited[v] && dist[v] < min) {
            min = dist[v];
            minIndex = v;
        }
    }
    return minIndex;
}

void dijkstra(int graph[V][V], int src) {
    int dist[V], visited[V] = {0};

    for (int i = 0; i < V; i++)
        dist[i] = INT_MAX;
    dist[src] = 0;

    for (int count = 0; count < V - 1; count++) {
        int u = findMinDistance(dist, visited);
        visited[u] = 1;

        for (int v = 0; v < V; v++) {
            if (!visited[v] && graph[u][v] && dist[u] != INT_MAX &&
                dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    printf("Dijkstra's Shortest Path:\n");
    for (int i = 0; i < V; i++)
        printf("Vertex %d -> Distance %d\n", i, dist[i]);
}
void bellmanFord(int graph[][3], int E, int src) {
    int dist[V];
    for (int i = 0; i < V; i++)
        dist[i] = INT_MAX;
    dist[src] = 0;

    for (int i = 1; i <= V - 1; i++) {
        for (int j = 0; j < E; j++) {
            int u = graph[j][0];
            int v = graph[j][1];
            int weight = graph[j][2];
            if (dist[u] != INT_MAX && dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
            }
        }
    }

    for (int i = 0; i < E; i++) {
        int u = graph[i][0];
        int v = graph[i][1];
        int weight = graph[i][2];
        if (dist[u] != INT_MAX && dist[u] + weight < dist[v]) {
            printf("Graph contains negative weight cycle\n");
            return;
        }
    }

    printf("Bellman-Ford Shortest Path:\n");
    for (int i = 0; i < V; i++)
        printf("Vertex %d -> Distance %d\n", i, dist[i]);
}
int main() {
    int graph[V][V] = {
        {0, 10, 0, 0, 5},
        {0, 0, 1, 0, 2},
        {0, 0, 0, 4, 0},
        {7, 0, 6, 0, 0},
        {0, 3, 9, 2, 0}
    };

    printf("\nUsing Dijkstra's Algorithm:\n");
    dijkstra(graph, 0);

    int edges[][3] = {
        {0, 1, 10}, {0, 4, 5}, {1, 2, 1},
        {1, 4, 2}, {2, 3, 4}, {3, 0, 7},
        {3, 2, 6}, {4, 1, 3}, {4, 2, 9}, {4, 3, 2}
    };

    int E = sizeof(edges) / sizeof(edges[0]);

    printf("\nUsing Bellman-Ford Algorithm:\n");
    bellmanFord(edges, E, 0);

    return 0;
}
