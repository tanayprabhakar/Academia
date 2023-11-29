#include<stdio.h>
void main()
{
    char string1[1000],string2[1000],string3[1000];
    int length1=0,length2=0,n,i=0;
    printf("Enter 1st string:\n");
    scanf("%s",&string1);
    printf("Enter 2nd string:\n");
    scanf("%s",&string2);
    while(string1[length1]!= '\0')
    {
        length1++;
    }
    while(string2[length2]!= '\0')
    {
        length2++;
    }
    n=length1;
    printf("Therefore the length of the string by the user is as follows:\nString1: %d\nString2: %d\n",length1,length2);
    while (n<length1+length2)
    {
        string1[n]=string2[i];
        n++;
        i++;
    }
    string1[n]='\0';
    printf("The concatinated string is: %s",string1);
}