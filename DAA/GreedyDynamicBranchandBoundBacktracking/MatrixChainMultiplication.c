#include <stdio.h>
#include <limits.h>

void matrixChainOrder(int p[], int n) {
    int dp[n][n], bracket[n][n];

    for (int i = 1; i < n; i++) dp[i][i] = 0;

    for (int l = 2; l < n; l++) {
        for (int i = 1; i < n - l + 1; i++) {
            int j = i + l - 1;
            dp[i][j] = INT_MAX;
            for (int k = i; k < j; k++) {
                int cost = dp[i][k] + dp[k + 1][j] + p[i - 1] * p[k] * p[j];
                if (cost < dp[i][j]) {
                    dp[i][j] = cost;
                    bracket[i][j] = k;
                }
            }
        }
    }

    printf("Minimum number of multiplications: %d\n", dp[1][n - 1]);
}

int main() {
    int dimensions[] = {1, 2, 3, 4};
    int n = sizeof(dimensions) / sizeof(dimensions[0]);
    matrixChainOrder(dimensions, n);
    return 0;
}
