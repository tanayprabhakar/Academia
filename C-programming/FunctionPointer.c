#include<stdio.h>
void swap(int a, int b, int *ptra, int *ptrb)
{
    int temp=*ptra;
    *ptra=*ptrb;
    *ptrb=temp;
}
void main()
{
int a,b;
int *ptra, *ptrb;
ptra=&a;
ptrb=&b;
a=15;
b=56;
swap(a,b,ptra,ptrb);
printf("The swapped values of a and b are: %d and %d\n",a,b);
}