#include<stdio.h>
void main()
{
    int i,j,k,l;
    char ch;
    printf("Enter row of first matrix\n");
    scanf("%d",&i);
    printf("Enter coloumn of first matrix\n");
    scanf("%d",&j);
    printf("Enter row of second matrix\n");
    scanf("%d",&k);
    printf("Enter coloumn of second matrix\n");
    scanf("%d",&l);
    int array1[i][j],array2[k][l];
    for(int x=0; x<i;x++)
    {
        for(int y=0;y<j;y++)
        {
        printf("Enter the element of %dx%d of first matrix:",x+1,y+1);
        scanf("%d",&array1[x][y]);
        }
    }
    for(int z=0; z<k;z++)
    {
        for(int a=0;a<l;a++)
        {
        printf("Enter the element of %dx%d of second matrix:",z+1,a+1);
        scanf("%d",&array2[z][a]);
        }
    }
    printf("DO YOU WANT TO PRINT THE ADDITION AND SUBTRACTION OF MATRIX Y FOR YES N FOR NO");
    scanf(" %c",&ch);
    if(ch=='Y')
    {
    if(i==k&&j==l)
    {
        int array3[i][j];
        int array4[i][j];
        printf("array after addition\n");
            for(int b=0;b<i;b++)
            {
                for(int c=0;c<j;c++)
                {
                    array3[b][c]=array2[b][c]+array1[b][c];
                    printf("%d\t",array3[b][c]);
                }
                printf("\n");
            }
         printf("array after subtraction\n");
            for(int b=0;b<i;b++)
            {
                for(int c=0;c<j;c++)
                {
                    array4[b][c]=array2[b][c]-array1[b][c];
                    printf("%d\t",array4[b][c]);
                }
                printf("\n");
            }
        }
        else
    {
        printf("Inavalid Option");
    }
    }
    
    
}