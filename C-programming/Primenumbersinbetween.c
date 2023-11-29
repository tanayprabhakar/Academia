#include <stdio.h>
void main()
{
int i, j, start=1, end;
int isPrime;
printf("Enter upper limit: ");
scanf("%d", &end);
printf("All prime numbers between %d to %d are:\n", start, end);
if(start < 2) 
start = 2;
for(i=start; i<=end; i++)
{
isPrime = 1; 
for(j=2; j<=i/2; j++)
{
if(i%j==0)
{
isPrime = 0;
break;
}
}
if(isPrime==1)
{
printf("%d, ", i);
}
}
}