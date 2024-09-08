#include <stdio.h>
void main()
{
    int rows = 5;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < rows - i; k++)
        {
            printf("%c", 'A' + k);
        }
        printf("\n");
    }
}
