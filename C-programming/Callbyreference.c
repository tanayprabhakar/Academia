#include<stdio.h>
void callbyvalue(int a, int b)
{
    int c;
    c=a;
    a=b;
    b=c;
    printf("The value after swapping by call by value:\nA:%d\nB:%d",a,b);
}
void callbyreference(int *a, int *b)
{
    int *c;
    *c=&a;
    *a=&b;
    *b=&c;
    printf("The value after swapping by call by value:\nA:%d\nB:%d",*a,*b);
}
void main()
{
    int a,b;
    printf("Enter Two Numbers for swapping:\n");
    scanf("%d%d",&a,&b);
    callbyvalue(a,b);
    callbyreference(&a,&b);
}