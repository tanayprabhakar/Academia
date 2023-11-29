#include<stdio.h>
void main()
{
    float c,f,k;
    printf("Enter the temprature in Celsius\n");
    scanf("%f",&c);
    f= ((9/5)*c)+32;
    printf("\nTemprature in Farhenheit: ");
    printf("%f\n",f);
    k=c+273;
    printf("\nTemprature in Kelvin: ");
    printf("%f\n",k);
}