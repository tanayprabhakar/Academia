#include<stdio.h>
void main()
{
    FILE *in,*in2,*out;
    char c;
    in=fopen("infile.txt","r");
    in2=fopen("infile_duplicate.txt","r");
    out=fopen("mergefile.txt","w");
    while((c=getc(in))!=EOF)
    {
        putc(c,out);
    }
    while((c=getc(in2))!=EOF)
    {
        putc(c,out);
    }
    fclose(in);
    fclose(in2);
    fclose(out);
}