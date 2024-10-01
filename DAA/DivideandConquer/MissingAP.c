#include <stdio.h>
int findMissingTerm(int arr[], int n)
{
    int d = (arr[n - 1] - arr[0]) / n;
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int expectedValue = arr[0] + mid * d;
        if (arr[mid] == expectedValue)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return arr[0] + low * d;
}
int main()
{
    int arr[] = {2, 4, 6, 10, 12, 14};
    int n = sizeof(arr) / sizeof(arr[0]);

    int missingTerm = findMissingTerm(arr, n);
    printf("The missing term is %d\n", missingTerm);

    return 0;
}
