#include<stdio.h>
void main()
{
int a, b, ans;
printf("Enter first number: ");
scanf("%d", &a);
printf("\nEnter second number: ");
scanf("%d", &b);
for (int i = 1; i <= b; i++)
{
ans+=a;
}
printf("answer:%d", ans);
}
