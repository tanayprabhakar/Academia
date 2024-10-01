#include <stdio.h>

int searchNearlySorted(int arr[], int n, int target)
{
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        if (mid > 0 && arr[mid - 1] == target)
        {
            return mid - 1;
        }

        if (mid < n - 1 && arr[mid + 1] == target)
        {
            return mid + 1;
        }

        if (arr[mid] > target)
        {
            high = mid - 2;
        }
        else
        {
            low = mid + 2;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {10, 3, 40, 20, 50, 80, 70};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 40;
    int result = searchNearlySorted(arr, n, target);
    if (result != -1)
    {
        printf("Element %d found at index %d\n", target, result);
    }
    else
    {
        printf("Element %d not found in the array\n", target);
    }
    return 0;
}
