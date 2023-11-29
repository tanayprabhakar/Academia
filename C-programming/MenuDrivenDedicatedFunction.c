#include<stdio.h>
void oddeven(int a)
{
    if (a%2==0)
    printf("The Number is Even\n");
    else
    printf("The Number is odd\n");
}


void prime(int n)
{
    int i, flag=0;
    if (n == 0 || n == 1)
    flag = 1;
    for (i = 2; i <= n / 2; ++i)
    {
      if (n % i == 0) 
    {
      flag = 1;
      break;
    }
    }
    if (flag == 0)
    printf("%d is a prime number.", n);
  else
    printf("%d is not a prime number.", n);
  
    }


int factorial(int a)
{
    int factorial=1;
    for(int i= 1; i<=a; i++)
    {
        factorial*=i;
    }
    return factorial;
}


int reverse(int n)
{
    int reverse=0, remainder;
    while (n != 0) 
    {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
    }
    return reverse;
}

void temperature(float t)
{
    float far;
    far=(t*(9/5))+32;
    printf("Temprature in Farhenheit is %f",far);
}


void main()
{
    int a,n,f,r;
    float t;
    printf("1. Odd/Even Determination\n2. Prime no. determination\n3. Factorial of the no\n4.Reverse of the number\n5.Temprature C to F\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
    printf("Enter a value to check if the number is odd or not:");
    scanf("%d", &n);
    oddeven(n);
    break;
    case 2:
    printf("Enter a value to check if the number is prime or not:");
    scanf("%d", &n);
    prime(n);
    break;
    case 3:
    printf("Enter a value to calculate factorial:");
    scanf("%d", &n);
    f=factorial(n);
    printf("The factorial of number %d is %d",n,f);
    break;
    case 4:
    printf("Enter a value to get a reverse:");
    scanf("%d", &n);
    r=reverse(n);
    printf("The reverse of the number is %d",r);
    break;
    case 5:
    printf("Enter the temprature in Celcius:");
    scanf("%f", &t);
    temperature(t);
    break;
    default:
    break;
    }
}