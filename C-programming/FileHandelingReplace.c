#include<stdio.h>
#include<string.h>
/*void main()
{
    FILE *in;
    in=fopen("Replace.txt","w");
    char a[2000];
    fscanf(in,&a);
    while(a!='/0')
    {
        strstr(a,"were");
    }
}*/
#include <stdio.h>
#include <string.h>

int main() {
  FILE *fp = fopen("Replace.txt", "w");
  fp = fopen("Replace.txt", "r+");
  char search_word[] = "were";
  char replace_word[] = "WARS";

  char line[1024];
  while (fgets(line, sizeof(line), fp) != NULL) {
    char *found = strstr(line, search_word);
    if (found != NULL) {
      int replace_length = strlen(replace_word);
      int replace_offset = found - line;
      memmove(found + replace_length, found, strlen(found) - replace_offset);
      memcpy(found, replace_word, replace_length);
    }
  }
  fclose(fp);
}


