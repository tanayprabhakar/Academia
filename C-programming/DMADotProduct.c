#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n1, n2, result=0;
    int *ptr1,*ptr2;
    printf("Give the size of first vector: ");
    scanf("%d",&n1);
    printf("Give the size of second vector: ");
    scanf("%d", &n2);
    if(n1==n2)
    {
    ptr1=(int*)malloc(n1*sizeof(int));
    ptr2=(int*)malloc(n2*sizeof(int));
    printf("Write vector A:\t");
    for(int i = 0; i<n1; i++)
    scanf("%d", ptr1+i);
    printf("Write vector B:\t");
    for(int i =0; i<n2; i++)
    scanf("%d", ptr2+i);
    for (int i = 0; i < n1; i++)
    {
    result = result + *(ptr1+i) * *(ptr2+i);
    }
    printf("Result: %d\n",result);
    free(ptr1);
    free(ptr2);
    }
    else
    return 0;
}
