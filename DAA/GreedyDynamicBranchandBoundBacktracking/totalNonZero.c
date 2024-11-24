#include <stdio.h>

int countNonZero(int matrix[][3], int rows, int cols) {
    int count = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != 0)
                count++;
        }
    }
    return count;
}

int main() {
    int matrix[3][3] = {{1, 0, 2}, {0, 0, 3}, {4, 5, 0}};
    int rows = 3, cols = 3;

    printf("Total non-zero elements: %d\n", countNonZero(matrix, rows, cols));
    return 0;
}
