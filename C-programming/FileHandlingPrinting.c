#include<stdio.h>
void main()
{
    FILE *in;
    char c;
    in=fopen("infile.txt","r");
    while(!feof(in))
    {
        fscanf(in,"%c",&c);
        printf("%c",c);
    }
    fclose(in);
}