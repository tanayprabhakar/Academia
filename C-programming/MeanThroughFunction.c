#include<stdio.h>
int mean(int a[])
{
    int sum=0;
    for (int i = 0; i < 5; i++)
    {
        sum+=a[i];
    }
    return sum/5;
}
void main()
{
    int a[5];
    int ans;
    for (int i =0;i<5;i++)
    {
        printf("Enter %d number to calculate mean: ", i+1);
        scanf("%d",&a[i]);
    }
    ans=mean(a);
    printf("The mean of the following array is: %d",ans);
}