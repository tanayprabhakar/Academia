#include<stdio.h>
void Inverse(int array[3][3])
{
    int A[3][3];
    A[0][0]= array[1][1]*array[2][2]-array[2][1]*array[1][2];
    A[0][1]= -(array[1][0]*array[2][2]-array[2][0]*array[1][2]);
    A[0][2]= array[1][0]*array[2][1]-array[2][0]*array[1][1];
    A[1][0]= -(array[0][1]*array[2][2]-array[2][1]*array[0][2]);
    A[1][1]=array[0][0]*array[2][2]-array[2][0]*array[0][2];
    A[1][2]=-(array[0][0]*array[2][1]-array[0][1]*array[2][0]);
    A[2][0]= array[0][1]*array[1][2]-array[1][1]*array[0][2];
    A[2][1]= -(array[0][0]*array[1][2]-array[1][0]*array[0][2]);
    A[2][2]= array[0][0]*array[1][1]-array[1][0]*array[0][1];

    float adj[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            adj[i][j]=A[j][i];
        }
    }

    float Det=A[0][0]*(A[1][1]*A[2][2]-A[2][1]*A[1][2])-A[1][0]*(A[0][1]*A[2][2]-A[2][1]*A[0][2])+A[2][0]*(A[0][1]*A[1][2]-A[0][2]*A[1][1]);

    float inv[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            inv [i][j]= (1/Det)*adj[i][j];
        }
    }
    printf("The Inverse of the function is:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%f\t",inv[i][j]);
        }
        printf("\n");
        }
}
void main()
{
    int array[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Enter %dx%d value of the matrix:\n",i+1,j+1);
            scanf("%d",&array[i][j]);
        }
    }
    Inverse(array);
}
