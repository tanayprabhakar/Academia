#include<stdio.h>
#include<math.h>
void quad(float a[])
{
    float d,e,f;
    d = sqrt((a[1]*a[1])-(4*a[0]*a[2]));
    e = (-a[1]-d)/(2*a[0]);
    f = (-a[1]+d)/(2*a[0]);
    printf("The roots of the equation are %f and %f", e, f);
}
void main()
{
    float a[3];
    printf("Enter First coeffcient number: \n ");
    scanf("%f",&a[0]);
    printf("Enter Second coefficient number: \n");
    scanf("%f",&a[1]);
    printf("Enter Third Coefficent number: \n");
    scanf("%f",&a[2]);
    quad(a);
}
