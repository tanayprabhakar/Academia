#include <stdio.h>
#include <limits.h> // Include limits.h for INT_MIN and INT_MAX

void swapSecondLargestSmallest(int arr[], int n) {
    int firstMin = INT_MAX, secondMin = INT_MAX;
    int firstMax = INT_MIN, secondMax = INT_MIN;
    int *secondMinPtr = NULL, *secondMaxPtr = NULL;

    for (int i = 0; i < n; i++) {
        if (arr[i] < firstMin) {
            secondMin = firstMin;
            secondMinPtr = &arr[i];
            firstMin = arr[i];
        } else if (arr[i] < secondMin && arr[i] != firstMin) {
            secondMin = arr[i];
            secondMinPtr = &arr[i];
        }

        if (arr[i] > firstMax) {
            secondMax = firstMax;
            secondMaxPtr = &arr[i];
            firstMax = arr[i];
        } else if (arr[i] > secondMax && arr[i] != firstMax) {
            secondMax = arr[i];
            secondMaxPtr = &arr[i];
        }
    }

    if (secondMinPtr && secondMaxPtr) {
        int temp = *secondMinPtr;
        *secondMinPtr = *secondMaxPtr;
        *secondMaxPtr = temp;
    }
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    swapSecondLargestSmallest(arr, n);

    printf("Array after swapping: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
