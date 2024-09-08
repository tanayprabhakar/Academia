#include <stdio.h>
void main()
{
    int rows = 5;
    for (int i = 0; i < 2 * rows - 1; i++)
    {
        int stars;
        if (i < rows)
        {
            stars = 2 * (rows - i) - 1;
        }
        else
        {
            stars = 2 * (i - rows + 1) + 1;
        }
        for (int j = 0; j < (2 * rows - 1 - stars) / 2; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < stars; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}
