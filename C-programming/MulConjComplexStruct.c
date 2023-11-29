/*wap that computes the product of two complex numbers taken as the structure variable from the user also compute
the product of conjugate of those complex numbers*/
#include<stdio.h>
struct complex
    {
        int real;
        int imaginary;
    };
void main()
{
    struct complex num1,num2;
    int mulreal, mulimg;
    printf("Enter the real part of first number\n");
    scanf("%d",&num1.real);
    printf("Enter the imaginary part of first number\n");
    scanf("%d",&num1.imaginary);
    printf("Enter the real part of second number\n");
    scanf("%d",&num2.real);
    printf("Enter the imaginary part of second number\n");
    scanf("%d",&num2.imaginary);
    mulreal=(num1.real*num2.real)-(num1.imaginary*num2.imaginary);
    mulimg=(num1.real*num2.imaginary)+(num1.imaginary*num2.real);
    printf("Multiplication: %d+(%d)i\n",mulreal,mulimg);
    printf("Conjugate of the multiplication: %d+(%d)i\n",mulreal,-1*mulimg);
}