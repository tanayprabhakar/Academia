#include<stdio.h>
void main()
{
    char string[1000];
    int length=0;
    printf("Enter string:\n");
    scanf("%s",&string);
    while(string[length]!= '\0')
    {
        length++;
    }
    printf("The reversed string is:\n");
   while (length>=0)
   {
    printf("%c",string[length]);
    length--;
   }
   
}