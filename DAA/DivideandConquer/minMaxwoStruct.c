#include <stdio.h>

void divideMinMax(int arr[], int start, int end, int *min, int *max)
{
    int leftMin, leftMax, rightMin, rightMax;

    if (start == end)
    {
        *max = arr[start];
        *min = arr[start];
        return;
    }
    if (start + 1 == end)
    {
        if (arr[start] >= arr[end])
        {
            *max = arr[start];
            *min = arr[end];
        }
        else
        {
            *max = arr[end];
            *min = arr[start];
        }
        return;
    }
    else
    {
        divideMinMax(arr, start, (start + end) / 2, &leftMin, &leftMax);
        divideMinMax(arr, ((start + end) / 2) + 1, end, &rightMin, &rightMax);

        *max = (leftMax > rightMax) ? leftMax : rightMax;
        *min = (leftMin < rightMin) ? leftMin : rightMin;
    }
}

void main()
{
    int arr[] = {4, 5, 2, 1, 6, 7, 8};
    int min, max;

    divideMinMax(arr, 0, 6, &min, &max);

    printf("min: %d\nmax: %d\n", min, max);
}
