#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

void knapsackDP(int values[], int weights[], int n, int capacity) {
    int dp[n + 1][capacity + 1];

    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= capacity; w++) {
            if (i == 0 || w == 0) {
                dp[i][w] = 0;
            } else if (weights[i - 1] <= w) {
                dp[i][w] = max(values[i - 1] + dp[i - 1][w - weights[i - 1]], dp[i - 1][w]);
            } else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    printf("Total value (DP): %d\n", dp[n][capacity]);

    printf("Items included (value, weight): ");
    int w = capacity;
    for (int i = n; i > 0 && w > 0; i--) {
        if (dp[i][w] != dp[i - 1][w]) {
            printf("(%d, %d) ", values[i - 1], weights[i - 1]);
            w -= weights[i - 1];
        }
    }
    printf("\n");
}

int main() {
    int values[] = {60, 100, 120};
    int weights[] = {10, 20, 30};
    int n = sizeof(values) / sizeof(values[0]);
    int capacity = 50;

    knapsackDP(values, weights, n, capacity);
    return 0;
}
