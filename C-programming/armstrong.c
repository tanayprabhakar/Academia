#include <math.h>
#include <stdio.h>
void main() {
   int i, originalNum, remainder,x;
   printf("Enter an integer: ");
   scanf("%d", &x);
   printf("All Armstrong numbers between 1 & %d are:\n",x);
for(i=1;i<=x;i++)
{
   float result = 0.0;
   int n = 0;
   originalNum = i;
   for (originalNum = i; originalNum != 0; ++n) 
   {
       originalNum /= 10;
   }
   for (originalNum = i; originalNum != 0; originalNum /= 10) 
   {
    remainder = originalNum % 10;
    result += pow(remainder, n);
   }
   if ((int)result == i)
   printf("%d\n", i);
}
}