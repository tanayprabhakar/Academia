#include<stdio.h>
int funct(int n);
int recfact(int n);
void main()
{
    int a, b;
    int n =7;
    a= funct(n);
    b=recfact(n);
    printf("%d\n",a);
    printf("%d\n",b);
}
int funct(int n)
{ 
    int f=1;
    for(int i=1;i<=n;i++)
    f=f*i;
    return f;
}
int recfact(int n)
{
    if (n==0)
    return 1;
    else 
    return n*recfact(n-1);
}