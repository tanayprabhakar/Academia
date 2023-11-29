#include <stdio.h>
#include<math.h>
int triangle_area(int base, int height) 
{
    return (base * height) / 2;
}
void swap(int *a, int *b) 
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
float* remainder1(int a, int b)
{
    return a%b;
}
void main() 
{
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1); 
    printf("Enter the second number: ");
    scanf("%d", &num2);
    int area = triangle_area(num1, num2);
    printf("Area of the right-angled triangle: %d\n", area);
    swap(&num1, &num2);
    printf("After swapping, the numbers are: %d and %d\n", num1, num2);
    int rem=remainder1(num1,num2);
    printf("The value of remainder is: %d\n",rem);

}
