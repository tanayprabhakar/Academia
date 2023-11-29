/*home assignment 
wap that  multiplies to 2d matrices that with dimensions provided at runtime by the user before multipliying the matrices 
check whether multiplication is possibe or not
if possible then only procced for the multiplication*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int r1, r2, c1, c2;
    int *ptr1, *ptr2;
    int res[r1][c2];
    if (c1==r2)
    {
        ptr1 = (int*)malloc(sizeof(int)*r1*c1);
        ptr2 = (int*)malloc(sizeof(int)*r2*c2);
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c2; j++) {
                res[i][j] = 0;
                for (k = 0; k < r2; k++) {
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }
    }
}