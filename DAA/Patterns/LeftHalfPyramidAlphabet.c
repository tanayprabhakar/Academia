#include <stdio.h>
void main()
{
    int rows = 5;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < (rows - i); j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("%c", 'A' + k);
        }
        printf("\n");
    }
}