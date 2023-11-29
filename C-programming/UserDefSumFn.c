#include<stdio.h>
int add(int a , int b)
{
    int sum = a + b;
    return sum;
}
void main()
{
    int sum,a,b;
    printf("Enter Two Numbers for sum:\n");
    scanf("%d%d",&a,&b);
    sum= add(a,b);
    printf("the sum is %d", sum);
}