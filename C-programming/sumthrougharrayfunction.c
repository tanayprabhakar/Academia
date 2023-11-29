#include<stdio.h>
void add(int b[][10],int m, int n)
{
int array;
for(int i =0; i<m;i++)
{
    for(int j=0; j<n;j++)
    {
        array+=b[i][j];
    }
}
printf("Sum of the elements of 2d array is: %d",array);
}
void main()
{
    int i,j;
    int array1[10][10];
    printf("Enter row of first matrix\n");
    scanf("%d",&i);
    printf("Enter coloumn of first matrix\n");
    scanf("%d",&j);
    //int array1[i][j];
    for(int x=0; x<i;x++)
    {
        for(int y=0;y<j;y++)
        {
        printf("Enter the element of %dx%d of first matrix:",x+1,y+1);
        scanf("%d",&array1[x][y]);
        }
    }
    add(array1,i,j);
}
    
