#include <stdio.h>
typedef struct
{
    int min;
    int max;
} value;
value divideMinMax(int arr[], int start, int end)
{
    value final, left, right;
    if (start == end)
    {
        final.max = arr[start];
        final.min = arr[end];

        return final;
    }
    if (start + 1 == end)
    {
        if (arr[start] >= arr[end])
        {
            final.max = arr[start];
            final.min = arr[end];
        }
        else
        {
            final.max = arr[end];
            final.min = arr[start];
        }
        return final;
    }
    else
    {
        left = divideMinMax(arr, start, (start + end) / 2);
        right = divideMinMax(arr, ((start + end) / 2) + 1, end);
        if (left.max > right.max)
        {
            final.max = left.max;
        }
        else
        {
            final.max = right.max;
        }
        if (left.min < right.min)
        {
            final.min = left.min;
        }
        else
        {
            final.min = right.min;
        }
        return final;
    }
}
void main()
{
    int arr[] = {4, 5, 2, 1, 6, 7, 8};
    value ans = divideMinMax(arr, 0, 6);
    printf("min: %d\nmax:%d\n", ans.min, ans.max);
}