
#include<stdio.h>
struct complex
    {
        int real;
        int imaginary;
    };
int multi(struct complex num1, struct complex num2)
{
    int mul;
    mul=(num1.real*num2.real)-(num1.imaginary*num2.imaginary);
    return mul;
}
void main()
{
    struct complex num1,num2;
    int mul;
    printf("Enter the real part of first number\n");
    scanf("%d",&num1.real);
    printf("Enter the imaginary part of first number\n");
    scanf("%d",&num1.imaginary);
    printf("Enter the real part of second number\n");
    scanf("%d",&num2.real);
    printf("Enter the imaginary part of second number\n");
    scanf("%d",&num2.imaginary);
    mul=multi(num1,num2);
    printf("multiplication of real part of the number is %d \n",mul);
}