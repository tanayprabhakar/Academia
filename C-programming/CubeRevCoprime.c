#include<stdio.h>
void cube(int num);
void rev(int num);
void coprime(int num);
void main()
{
    int num;
    printf("Input 4 digit number:\n");
    scanf("%d",&num);
    cube(num);
    rev(num);
    coprime(num);
}
void cube(int num)
{
    int sum;
    int newnum=num;
    while(num!=0)
    {
        int a=num%10;
        sum +=(a*a*a);
        num/=10;
    }
    if (newnum==sum)
    {
        printf("The sum of cube is equal to itself\n");
    }
    else
    {
        printf("The sum of cube is not equal to itself\n");
    }
}
void rev(int num)
{
    int remainder,n,reverse;
    n=num;
    reverse=0;
    while (n != 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
  }
    if (reverse==num)
    {
        printf("The reverse is equal\n");
    }
    else
    {
        printf("The reverse is not equal\n");
    }
}
void coprime(int num)
{
    int remainder,n,reverse,gcd;
    n=num;
    reverse=0;
    while (n != 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
    }
    for(int i=1; i <= num && i <= reverse; ++i)
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
        printf("the number is coprime\n");
    }

}