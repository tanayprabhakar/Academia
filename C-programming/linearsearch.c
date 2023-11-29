#include<stdio.h>
int main()
{
   int n,x;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    int array[n];
    for(int i=0; i<n;i++)
    {
        printf("Enter the %d element:\n",i+1);
        scanf("%d",&array[i]);
    } 
    printf("Enter the number you want to search in the array:\n");
    scanf("%d",&x);
    for(int j=0; j<n;j++)
    {
        if(array[j]==x)
        {
            printf("The index of the value is %d",j);
            return 0;
        }
    }
    printf("The desired number is unavailable in the array"); 

}