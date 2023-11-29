#include<stdio.h>
#include<math.h>
int armstrong (int num)
{
int originalNum, remainder, n = 0;
   float result = 0.0;
   originalNum = num;
   for (originalNum = num; originalNum != 0; ++n) 
   {
    originalNum /= 10;
   }
   for (originalNum = num; originalNum != 0; originalNum /= 10) 
   {
    remainder = originalNum % 10;
    result += pow(remainder, n);
   }
   if ((int)result == num)
    printf("%d is an Armstrong number.\n", num);
   else
    printf("%d is not an Armstrong number.\n", num);
   return num;
}
int coprime(int num)
{
    int remainder,n,reverse,gcd;
    n=num;
    reverse=0;
    while (n != 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
    }
    for(int i=1; i <= num || i <= reverse; ++i)
    {
        if(num%i==0 && reverse%i==0)
            gcd = i;
    }
    
    if(gcd==1)
    {
        printf("the number is coprime\n");
    }
    else
    {
        printf("the number is not a coprime\n");
    }
}
int factorial(int a)
{
    int factorial=1;
    for(int i= 1; i<=a; i++)
    {
        factorial*=i;
    }
    printf("The factorial of %d is: %d",a,factorial);
    return factorial;
}
void main()
{
int a, arms, cop, fact;
printf("Enter a number: ");
scanf("%d", &a);
arms=armstrong(a);
cop=coprime(a);
fact=factorial(a);
}