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
int countOccurrences(int arr[], int n, int target)
{
    int first = findFirstOccurrence(arr, n, target);
    if (first == -1)
    {
        return 0;
    }

    int last = findLastOccurrence(arr, n, target);
    return last - first + 1;
}

int main()
{
    int arr[] = {1, 2, 2, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 2;

    int count = countOccurrences(arr, n, target);
    printf("Number %d appears %d times in the array.\n", target, count);

    return 0;
}
