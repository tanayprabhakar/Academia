/* wap that computes the area of triangle rectangle square cube cuboid using macro definitions
provide all neccessary arguments for the area computations in respective shapes on you own*/
#include<stdio.h>
#define tri(b,h) 0.5*b*h
#define sq(l) l*l
#define rect(l,b) l*b
#define cube(l) l*l*l
#define cuboid(l,b,h) l*b*h
void main()
{
    int l=10, b=20, h=30;
    printf("square: %d\n",sq(l));
    printf("triangle: %2.f\n",tri(b,h));
    printf("rectangle: %d\n",rect(l,b));
    printf("cube: %d\n",cube(l));
    printf("cuboid: %d\n",cuboid(l,b,h));
}