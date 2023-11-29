#include<stdio.h>
void main()
{
    float length,width,height,volume;
    printf("enter length, breadth and height for cuboid\n");
    scanf("%f%f%f",&length,&width, &height);
    volume = length*width*height;
    printf("\nAnswer: ");
    printf("%f\n",volume);
}