#include<stdio.h>
void main()
{
    float a[15];
    float sum;
    float mean;
    int n;
    do
    {
        printf("Enter a number b/w 1 to 15:\n");
        scanf("%d",&n);
    }while (n<1||n>15);
    
    printf("Enter %d numbers:\n",n);
    for(int i =0; i<n;i++)
    {
        scanf("%f",&a[n]);
        sum+=a[n];
    }
    mean=sum/n;
    printf("The mean of %d numbers are: %f",n,mean);
}