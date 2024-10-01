#include <stdio.h>

int findFirstOccurrence(int arr[], int n, int target)
{
    int low = 0, high = n - 1, result = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
        {
            result = mid;
            high = mid - 1;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return result;
}
int findLastOccurrence(int arr[], int n, int target)
{
    int low = 0, high = n - 1, result = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            result = mid;
            low = mid + 1;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return result;
}
int main()
{
    int arr[] = {1, 2, 2, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 2;

    int first = findFirstOccurrence(arr, n, target);
    int last = findLastOccurrence(arr, n, target);
    if (first != -1)
    {
        printf("First occurrence of %d is at index %d\n", target, first);
        printf("Last occurrence of %d is at index %d\n", target, last);
    }
    else
    {
        printf("%d not found in the array\n", target);
    }

    return 0;
}
