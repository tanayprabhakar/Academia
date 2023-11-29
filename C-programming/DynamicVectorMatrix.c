#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a[2][3],b[2][3];
    int *ptr1 =(int*)calloc(6,sizeof(int));
    int *ptr2 =(int*)calloc(6,sizeof(int));
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Enter %dx%d value of the matrix:\n",i+1,j+1);
            scanf("%d",ptr1+i+j);
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Enter %dx%d value of the matrix:\n",i+1,j+1);
            scanf("%d",ptr2+i+j);
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {

            printf("%d\t",(*(ptr1+i+j)) * (*(ptr2+i+j)));
        }
        printf("\n");
        }
}
