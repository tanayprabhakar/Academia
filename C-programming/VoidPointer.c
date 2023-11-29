#include<stdio.h>
void main()
{
    int a = 10;
    float b= 13.8;
    char c = 'u';
    void *ptr;
    ptr = &a;
    printf("Interger value =\t%d\n", *(int*)ptr);
    ptr = &b;
    printf("Float value =\t%f\n", *(float*)ptr);
    ptr = &c;
    printf("Character value =\t%c\n", *(char*)ptr);
}