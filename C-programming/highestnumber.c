#include<stdio.h>
void main()
{
    int first, second, third;
    printf("Enter First number: ");
    scanf("%d",&first);
    printf("Enter Second number: ");
    scanf("%d",&second);
    printf("Enter Third number: ");
    scanf("%d",&third);
    if(first>second && first>third)
    {
        printf("Highest number:%d", first);
    }
    else if(second>third)
    {
        printf("Highest number:%d", second);
    }
    else
    {
        printf("Highest number:%d", third);
    }
}
