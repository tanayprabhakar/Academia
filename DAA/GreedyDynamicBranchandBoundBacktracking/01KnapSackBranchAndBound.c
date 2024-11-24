#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int level, profit, weight;
    float bound;
} Node;

float bound(Node u, int n, int capacity, int weights[], int values[]) {
    if (u.weight >= capacity) return 0;

    float result = u.profit;
    int j = u.level + 1;
    int totalWeight = u.weight;

    while (j < n && totalWeight + weights[j] <= capacity) {
        totalWeight += weights[j];
        result += values[j];
        j++;
    }

    if (j < n) {
        result += (float)(capacity - totalWeight) * values[j] / weights[j];
    }

    return result;
}

void knapsackBranchBound(int n, int capacity, int weights[], int values[]) {
    Node u, v;
    u.level = -1;
    u.profit = u.weight = 0;

    u.bound = bound(u, n, capacity, weights, values);
    Node queue[100];
    int front = 0, rear = 0;

    queue[rear++] = u;
    int maxProfit = 0;

    while (front < rear) {
        u = queue[front++];

        if (u.bound > maxProfit) {
            v.level = u.level + 1;
            v.weight = u.weight + weights[v.level];
            v.profit = u.profit + values[v.level];

            if (v.weight <= capacity && v.profit > maxProfit) {
                maxProfit = v.profit;
            }

            v.bound = bound(v, n, capacity, weights, values);
            if (v.bound > maxProfit) {
                queue[rear++] = v;
            }

            v.weight = u.weight;
            v.profit = u.profit;
            v.bound = bound(v, n, capacity, weights, values);
            if (v.bound > maxProfit) {
                queue[rear++] = v;
            }
        }
    }
    printf("Max value (Branch & Bound): %d\n", maxProfit);
}

int main() {
    int weights[] = {10, 20, 30};
    int values[] = {60, 100, 120};
    int n = sizeof(weights) / sizeof(weights[0]);
    int capacity = 50;

    knapsackBranchBound(n, capacity, weights, values);
    return 0;
}
