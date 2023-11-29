#include<stdio.h>
int multiply(int a,int b)
{
    return a*b;
}

int main()
{
    //return type(*name of function pointer)(t1,t2,t3)=&function name
    int(*operation)(int,int)=&multiply;
    int result=operation(3,4);
    printf("result:%d\n",result);
    return 0;
}