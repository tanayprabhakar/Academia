/*WAP that creates the copy of a file while  replacing every spacing with dollar sign*/
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
        if(c!=' ')
        putc(c,out);
        else
        putc('$',out);
    }
    fclose(in);
    fclose(out);
}