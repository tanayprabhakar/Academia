#include <stdio.h>
int main()
{
    int n = 5;
    for (int i = 0; i < 2 * n - 1; i++)
    {
        int letters;
        if (i < n)
        {
            letters = 2 * i + 1;
        }
        else
        {
            letters = 2 * (2 * n - 1 - i) - 1;
        }
        for (int j = 0; j < (2 * n - 1 - letters) / 2; j++)
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
