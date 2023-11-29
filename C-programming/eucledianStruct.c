//wap that computes eucledian's disatnce b/w the two points in 3d cartisian space where the points are to be recorded as structure variables
#include<stdio.h>
#include<math.h>
struct coordinates
    {
        float x;
        float y;
        float z;
    };
void main()
{
    struct coordinates co1, co2;
    float distance;
    printf("Enter first coordinates:\n");
    scanf("%f",&co1.x);
    scanf("%f",&co1.y);
    scanf("%f",&co1.z);
    printf("Enter second coordinates:\n");
    scanf("%f",&co2.x);
    scanf("%f",&co2.y);
    scanf("%f",&co2.z);
    distance=sqrt(((co2.x-co1.x)*(co2.x-co1.x))+((co2.y-co1.y)*(co2.y-co1.y))+((co2.z-co1.z)*(co2.z-co1.z)));
    printf("Therefore the distance is %f",distance);
}