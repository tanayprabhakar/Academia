#include <stdio.h>
void main()
{
    int rows = 5;
    for (int i = 0; i < 2 * rows - 1; i++)
    {
        int letters;
        if (i < rows)
        {
            letters = 2 * (rows - i) - 1;
        }
        else
        {
            letters = 2 * (i - rows + 1) + 1;
        }
        for (int j = 0; j < (2 * rows - 1 - letters) / 2; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < letters; k++)
        {
            printf("%c", k + 'A');
        }
        printf("\n");
    }
}
