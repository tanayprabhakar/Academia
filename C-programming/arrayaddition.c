#include<stdio.h>
void add1(int a, int b)
{
int c;
c=a+b;
printf("Through print by value the addition is %d \n",c);
}
void add2(int*a, int*b)
{
int c=*a+*b;
printf("Through print by reference the addition is %d \n",c);
}
void main()
{
int a[10],m,n,o,p;
for (int i=0;i<10;i++)
{
printf("Enter %d number: ",i+1);
scanf("%d",&a[i]);
}
printf("Enter 1 number at random between 1 to 10: ");
scanf("%d",&m);
printf("Enter another number at random between 1 to 10: ");
scanf("%d",&n);
o=a[m-1];
p=a[n-1];
add1(a[m-1], a[n-1]);
add2(&o, &p);
}
