#include<stdio.h>
void main()
{
    char a;
    printf("enter a character: ");
    scanf("%c", &a);
    if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U'||a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
}
