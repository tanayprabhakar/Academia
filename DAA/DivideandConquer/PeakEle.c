#include <stdio.h>
int findPeakElement(int arr[], int n)
{
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if ((mid == 0 || arr[mid] >= arr[mid - 1]) && (mid == n - 1 || arr[mid] >= arr[mid + 1]))
        {
            return mid;
        }
        else if (mid > 0 && arr[mid - 1] > arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {1, 3, 20, 4, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int peakIndex = findPeakElement(arr, n);
    printf("The peak element is %d at index %d\n", arr[peakIndex], peakIndex);
    return 0;
}
