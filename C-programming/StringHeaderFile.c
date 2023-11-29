#include<stdio.h>
#include<string.h>
void main ()
{
    char a[]="hello";
    char b[]=" world!";
    char c[100];
    strcpy(c,a);
    printf("Strcat: %s\n",strcat(a,b));
    printf("Strcmp: %d\t%d\n",strcmp(a,b),strcmp(a,a));
    printf("Strlen: %ld\n",strlen(a));
    printf("Strcpy: %s\n",c);
    puts(b);
}