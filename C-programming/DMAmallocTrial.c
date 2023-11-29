#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n, i, *ptr, *cptr;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    ptr = (int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    scanf("%d",ptr+i);
    for ( i = 0; i < n; i++)
    printf("%d\t",*(ptr+i));
    free(ptr);
    printf("\n");
    ptr=(int*)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
    scanf("%d",ptr+i);
    for ( i = 0; i < n; i++)
    printf("%d\t",*(ptr+i));
    free(ptr);
}