#include<stdio.h>
void main()
{
float n,sum;
printf("Enter a number: ");
scanf("%f",&n);
for(float i=1; i<=n; i++)
{
sum=sum+(1/i);
}
printf("\nSum of the given series is %f\n", sum);
}