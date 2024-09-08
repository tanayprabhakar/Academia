#include <stdio.h>
void main()
{
    int n = 5;
    for (int i = 0; i < 2 * n - 1; i++)
    {
        int stars;
        if (i < n)
        {
            stars = 2 * i + 1;
        }
        else
        {
            stars = 2 * (2 * n - 1 - i) - 1;
        }
        for (int j = 0; j < (2 * n - 1 - stars) / 2; j++)
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
