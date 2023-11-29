#include<stdio.h>
void main()
{
    int *ptr,*ptre;
    int array[5]={1,2,3,4,5};
    ptr = &array;
    ptre=ptr+4;
    for(int i =0;i<2;i++)
    {
        int temp=*ptr;
        *ptr=*ptre;
        *ptre=temp;
        ptr++;
        ptre--;
    }
    for(int i =0;i<5;i++)
    {
        printf("%d\t",array[i]);
    }
}