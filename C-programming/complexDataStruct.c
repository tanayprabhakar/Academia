//wap that creates a structure variable containing the fields reffering to real and imaginary part of a imaginary numbers
//two variable compute multiplication of two real numbers by these variable
#include<stdio.h>
struct complex
    {
        int real;
        int imaginary;
    };
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
    mul=(num1.real*num2.real)-(num1.imaginary*num2.imaginary);
    printf("multiplication of real part of the number is %d \n",mul);
}