#include<stdio.h>
#include<stdlib.h>
void main()
{
  
    int n, i, *ptr;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    ptr = (int*)malloc(n*sizeof(int));
    printf("Enter the value of the array:\n");
    for(i=0;i<n;i++)
    scanf("%d",ptr+i);
    printf("The input array is:\n");
    for ( i = 0; i < n; i++)
    printf("%d\t",*(ptr+i));
    free(ptr);
    printf("\n");
}
