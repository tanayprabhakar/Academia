#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n1, n2, result;
    int *ptr1,*ptr2;
    printf("Give the size of first vector: ");
    scanf("%d",&n1);
    printf("Put down the size of vectors below\n");
    scanf("%d", &n2);
    if(n1==n2)
    ptr1=(int*)malloc(n1*sizeof(int));
    ptr2=(int*)malloc(n2*sizeof(int));
    printf("Write vector A:\t");
    for(int i =0; i<n1; i++)
    scanf("%d", ptr1+i);
    printf("Write vector B:\t");
    for(int i =0; i<n2; i++)
    scanf("%d", ptr2+i);
    for (int i = 0; i < n1; i++)
    result += (*ptr1)*(*ptr2);
    printf("Result: %d",result);
}
