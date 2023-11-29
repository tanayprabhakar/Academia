#include<stdio.h>
void main()
{
    int a=1;
    float b=2.1;
    char c='T';
    int *_a=&a;
    float *_b=&b;
    char *_c=&c;
    int sum=*_a+*_a;
    printf("Sum:%u",sum);
}