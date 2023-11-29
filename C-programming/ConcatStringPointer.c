#include<stdio.h>
#include<string.h>
void main()
{
    char a[]="hello";
    char b[]="world!";
    char *ptra=a;
    char*ptrb=b;
    printf("The concatinated string is:\n");
    for (int i = 0; i < strlen(a); i++)
    {
        printf("%c",*(ptra+i));
    }
    for (int i = 0; i < strlen(b); i++)
    {
        printf("%c",*(ptrb+i));
    }
    printf("\n");
}