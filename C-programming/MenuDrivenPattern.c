#include<stdio.h>
void main()
{
int a;
int rows = 5;
printf("1.Star pattern\n2.Number pattern\n");
scanf("%d", &a);
switch(a)
{
case 1:
for (int i = 0; i < rows; i++) 
{
    for (int j = 0; j < 2 * (rows - i) - 1; j++) 
    {
     printf(" ");
    }
    for (int k = 0; k < 2 * i + 1; k++) 
    {
    printf("* ");
    }
    printf("\n");
}
break;
case 2:
int k, l;
for (k = 1;  k <= rows; k++) 
{
for (l = 1; l <= k; l++) 
{
printf("%d", k);
}
printf("\n");
}
break;
}
}
