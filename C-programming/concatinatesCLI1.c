#include<stdio.h>
void main(int argc,char *argv[])
{
    int i=0;
    printf("Concatinated string: ");
    while(argv[1][i]!='\0')
    {
        printf("%c",argv[1][i]);
        i++;
    }
    i=0;
    while(argv[2][i]!='\0')
    {
        printf("%c",argv[2][i]);
        i++;
    }
    printf("\n");
}