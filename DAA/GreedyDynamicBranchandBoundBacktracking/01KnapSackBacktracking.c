#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

void knapsackBacktracking(int index, int weights[], int values[], int n, int capacity, int currWeight, int currValue, int *maxValue) {
    if (index == n) {
        if (currValue > *maxValue) {
            *maxValue = currValue;
        }
        return;
    }
    knapsackBacktracking(index + 1, weights, values, n, capacity, currWeight, currValue, maxValue);
    if (currWeight + weights[index] <= capacity) {
        knapsackBacktracking(index + 1, weights, values, n, capacity, currWeight + weights[index], currValue + values[index], maxValue);
    }
}

int main() {
    int weights[] = {10, 20, 30};
    int values[] = {60, 100, 120};
    int n = sizeof(weights) / sizeof(weights[0]);
    int capacity = 50;
    int maxValue = 0;

    knapsackBacktracking(0, weights, values, n, capacity, 0, 0, &maxValue);
    printf("Max value (Backtracking): %d\n", maxValue);
    return 0;
}
