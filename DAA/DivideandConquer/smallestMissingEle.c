#include <stdio.h>
int findSmallestMissing(int arr[], int n)
{
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == mid)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return low;
}

int main()
{
    int arr[] = {0, 1, 2, 6, 9, 11, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    int missing = findSmallestMissing(arr, n);
    printf("The smallest missing element is %d\n", missing);

    return 0;
}
