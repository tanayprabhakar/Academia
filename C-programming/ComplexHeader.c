struct complex
    {
        int real;
        int imaginary;
    };
#include<stdio.h>
#include"ComplexN.h"
void main()
{
    struct complex num1, num2;
    printf("Enter the real part of first number\n");
    scanf("%d",&num1.real);
    printf("Enter the imaginary part of first number\n");
    scanf("%d",&num1.imaginary);
    printf("Enter the real part of second number\n");
    scanf("%d",&num2.real);
    printf("Enter the imaginary part of second number\n");
    scanf("%d",&num2.imaginary);
    Conjugate(num1.real,num1.imaginary,num2.real,num2.imaginary);
}