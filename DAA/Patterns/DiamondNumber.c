#include <stdio.h>
int main()
{
    int n = 5;
    for (int i = 0; i < 2 * n - 1; i++)
    {
        int digits;
        if (i < n)
        {
            digits = 2 * i + 1;
        }
        else
        {
            digits = 2 * (2 * n - 1 - i) - 1;
        }
        for (int j = 0; j < (2 * n - 1 - digits) / 2; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < digits; k++)
        {
            printf("%d", k + 1);
        }
        printf("\n");
    }
    return 0;
}
