#include<stdio.h>
void main()
{
    int array[5];
    int *ptr = array;
    for (int i = 0; i<5; i++)
    {
        printf("Enter %d element of the array: ", i+1);
        scanf("%d",ptr+i);
    }
    for (int i = 0; i<5; i++)
    {
        printf("the %d element of the array is: %d\n", i+1,*(ptr+i));
    }
}