#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n;
    printf("Enter the size of the list:\n");
    scanf("%d",&n);
    int *ptr = (int*)calloc(n,sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of %i element:\n",i+1);
        scanf("%d",ptr+i);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value of %i element:%d\n",i+1,*(ptr+i));
    }
    free(ptr);
}