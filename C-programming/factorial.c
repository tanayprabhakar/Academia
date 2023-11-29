#include<stdio.h>
void main()
{
    int a,i=1,answer=1;
    printf("Enter a number to take a factorial of:\n");
    scanf("%d", &a);
    for(i=1;i<=a;i++)
    {
        answer=answer*i;
    }
    printf("answer:%d",answer);
}