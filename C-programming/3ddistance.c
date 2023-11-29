#include<stdio.h>
#include<math.h>
float eucl(float x1,float y1,float z1,float x2,float y2,float z2)
{
    float distance;
    distance = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1))+((z2-z1)*(z2-z1)));
    return distance;
}
void main()
{
    float x1,y1,z1,x2,y2,z2,distance;
    printf("Enter x1, y1, z1:\n");
    scanf("%f%f%f",&x1,&y1,&z1);
    printf("Enter x2, y2, z2:\n");
    scanf("%f%f%f",&x2,&y2,&z2);
    distance=eucl(x1,y1,z1,x2,y2,z2);
    printf("Distance:%f",distance);
}