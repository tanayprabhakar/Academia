/*WAP that creates a copy of a file entered by the user while converting every small letter into upper letter*/
#include<stdio.h>
#include<ctype.h>

void main()
{
    FILE *in, *out;
    char c;
    in=fopen("infile.txt","r");
    out=fopen("infile_duplicate.txt","w");
    while((c=getc(in))!=EOF)
    {
        putc(toupper(c),out);
    }
    fclose(in);
    fclose(out);
}