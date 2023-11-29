#include<stdio.h>
void main()
{
    int i = 1;
    printf("Output through while:\n");
    while(i <= 10)
    {
        printf("%d\n", i);
        i++;
    }
    int j = 1;
    printf("Output through do while:\n");
    do
    {
        printf("%d\n", j);
        j++;
    }
    while(j <= 10);
    printf("Output through For loop:\n");
    for(int k = 1; k <= 10; k++)
    {
       printf("%d\n", k); 
    }


}