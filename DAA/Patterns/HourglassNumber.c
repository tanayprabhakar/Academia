#include <stdio.h>
void main()
{
    int rows = 5;
    for (int i = 0; i < 2 * rows - 1; i++)
    {
        int numbers;
        if (i < rows)
        {
            numbers = 2 * (rows - i) - 1;
        }
        else
        {
            numbers = 2 * (i - rows + 1) + 1;
        }
        for (int j = 0; j < (2 * rows - 1 - numbers) / 2; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < numbers; k++)
        {
            printf("%d", k + 1);
        }
        printf("\n");
    }
}
