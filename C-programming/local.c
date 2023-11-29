#include<stdio.h>
//int a= 1000;
int main()
{
    int a = 10;
    printf("main function %d\n",a);
   {
        int a = 100;
        printf("Local function %d\n",a);
        {
            printf("Local-2-%d\n",a);
        }
   }
    printf("%d",a);
    return 0;
}