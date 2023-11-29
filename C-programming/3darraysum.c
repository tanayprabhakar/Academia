#include<stdio.h>
void main()
{
    int a[2][2][2];
    int sum=0;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<2;k++)
            {
            printf("Enter %dx%dx%d value of the matrix:\n",i+1,j+1,k+1);
            scanf("%d",&a[i][j][k]);
            sum+=a[i][j][k];
            }
        }
    }
    printf("sum:%d\n",sum);
}
