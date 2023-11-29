#include<stdio.h>
#include<math.h>
void main()
{
    float a, b, c, d, e, f;
    printf("Enter First coeffcient number:\n ");
    scanf("%f",&a);
    printf("Enter Second coefficient number: \n");
    scanf("%f",&b);
    printf("Enter Third Coefficent number: \n");
    scanf("%f",&c);
    d = sqrt((b*b)-(4*a*c));
    e = (-b-d)/(2*a);
    f = (-b+d)/(2*a);
    printf("The roots of the equation are %f and %f", e, f);
}
