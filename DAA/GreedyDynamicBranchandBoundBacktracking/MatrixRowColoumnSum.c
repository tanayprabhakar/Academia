#include <stdio.h>

int main() {
    int r = 3, c = 3;
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rowSum, colSum;

    for (int i = 0; i < r; i++) {
        rowSum = 0;
        for (int j = 0; j < c; j++)
            rowSum += matrix[i][j];
        printf("Sum of row %d: %d\n", i + 1, rowSum);
    }

    for (int j = 0; j < c; j++) {
        colSum = 0;
        for (int i = 0; i < r; i++)
            colSum += matrix[i][j];
        printf("Sum of column %d: %d\n", j + 1, colSum);
    }
    return 0;
}
