#include<stdio.h>
void main(int argc,char *argv[])
{
    char string1[1000];
    string1=argv[1];
    char string2[1000];
    string2=argv[2];

    int length1=0,length2=0,n,i=0;
    while(string1[length1]!= '\0')
    {
        length1++;
    }
    while(string2[length2]!= '\0')
    {
        length2++;
    }
    n=length1;
    while (n<length1+length2)
    {
        string1[n]=string2[i];
        n++;
        i++;
    }
    string1[n]='\0';
    printf("The concatinated string is: %s",string1);
}