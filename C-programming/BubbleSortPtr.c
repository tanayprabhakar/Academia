#include<stdio.h>
void main()
{
    int array[5]={5,4,3,2,1};
    int *ptr=array;
    for (int i = 0;i<5-1;i++)
    {
        for(int j=0;j<5-i-1;j++)
        {
            int temp=*(ptr+j);
            *(ptr+j)=*(ptr+j+1);
            *(ptr+j+1)=temp;
        }
    }
    printf("The sorted array is: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",*(ptr+i));
    }
    printf("\n");
}