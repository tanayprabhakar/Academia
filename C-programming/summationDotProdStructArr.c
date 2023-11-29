/*wap that creates suitable number of variables of the structures specified below:
struct Array
{
    int A[4];
    int B[2][3];
    int N;
};
define a function which accepts two varibles of this data type and perform the following operations on the field of those two
structure variables 
A:-dot product
B:-summation
C:-compare*/
#include<stdio.h>
typedef struct
{
    int A[4];
    int B[2][3];
    int N;
}array; 
void structfunction(array arr1,array arr2)
{
    array result;
     for(int i=0;i<=3;i++)
    {
        result.A[i]=arr1.A[i]*arr2.A[i];
    }
     for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            result.B[i][j]=arr1.B[i][j]+arr2.B[i][j];
        }
    }
    printf("Dot Product:\n");
    for(int i=0;i<4;i++)
    {
        printf("%d\t",result.A[i]);
    }
    printf("\nSummation:\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",result.B[i][j]);
        }
        printf("\n");
    }
    if(arr1.N>arr2.N)
    {
        printf("Array 1 wins");
    }
    else
    {
        printf("Array 2 wins");
    }
}
void main()
{
    array arr1,arr2;
    printf("Enter the value of array 1 for dot product:\n");
    for(int i=0;i<=3;i++)
    {
        scanf("%d",&arr1.A[i]);
    }
    printf("Enter the value of array 2 for dot product:\n");
    for(int i=0;i<=3;i++)
    {
        scanf("%d",&arr2.A[i]);
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Enter the %dx%d value of first matrix\n",i+1,j+1);
            scanf("%d",&arr1.B[i][j]);
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Enter the %dx%d value of second matrix\n",i+1,j+1);
            scanf("%d",&arr2.B[i][j]);
        }
    }
    printf("Enter the value of N for array 1:\n");
    scanf("%d",&arr1.N);
    printf("Enter the value of N for array 2:\n");
    scanf("%d",&arr2.N);
    structfunction(arr1,arr2);
   
}