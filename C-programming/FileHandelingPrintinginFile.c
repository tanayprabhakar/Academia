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
        putc(c,out);
    }
    fclose(in);
    fclose(out);
}