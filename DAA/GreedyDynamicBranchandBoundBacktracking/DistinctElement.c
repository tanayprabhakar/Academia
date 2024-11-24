#include <stdio.h>

void printDistinct(int arr[], int n) {
    int isDistinct;

    printf("Distinct elements: ");
    for (int i = 0; i < n; i++) {
        isDistinct = 1;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isDistinct = 0;
                break;
            }
        }
        if (isDistinct)
            printf("%d ", arr[i]);
    }
}

int main() {
    int arr[] = {12, 10, 9, 45, 2, 10, 10, 45};
    int n = sizeof(arr) / sizeof(arr[0]);

    printDistinct(arr, n);
    return 0;
}
