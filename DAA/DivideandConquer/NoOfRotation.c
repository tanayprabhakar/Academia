#include <stdio.h>
int findRotations(int arr[], int n)
{
    int low = 0, high = n - 1;
    if (arr[low] <= arr[high])
    {
        return 0;
    }
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (mid < high && arr[mid] > arr[mid + 1])
        {
            return mid + 1;
        }
        if (mid > low && arr[mid] < arr[mid - 1])
        {
            return mid;
        }
        if (arr[mid] >= arr[low])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return 0;
}

int main()
{
    int arr[] = {15, 18, 2, 3, 6, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int rotations = findRotations(arr, n);
    printf("The array is rotated %d times.\n", rotations);
    return 0;
}
