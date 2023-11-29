/*WAP that multiplies two matrices of compatible dimensions via a user defined function accepting matrices as input
call the function through an appropriate pointer(to function)*/
#include<stdio.h>
void multiplyMatrices(int first[][10],int second[][10],int r1, int c1, int r2, int c2) {
    int result[10][10];
   for (int i = 0; i < r1; ++i) {
      for (int j = 0; j < c2; ++j) {
         result[i][j] = 0;
      }
   }
   for (int i = 0; i < r1; ++i) {
      for (int j = 0; j < c2; ++j) {
         for (int k = 0; k < c1; ++k) {
            result[i][j] += first[i][k] * second[k][j];
         }
      }
   }
   printf("\nOutput Matrix:\n");
   for (int i = 0; i < r1; ++i) {
      for (int j = 0; j < c2; ++j) {
         printf("%d  ", result[i][j]);
         if (j == c2 - 1)
            printf("\n");
      }
   }
}

void main()
{ 
    int first[10][10], second[10][10], result[10][10], r1, c1, r2, c2;
    printf("Enter rows and column for the first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and column for the second matrix: ");
    scanf("%d %d", &r2, &c2);
    while (c1 != r2) {
    printf("Error! Enter rows and columns again.\n");
    printf("Enter rows and columns for the first matrix: ");
    scanf("%d%d", &r1, &c1);
    printf("Enter rows and columns for the second matrix: ");
    scanf("%d%d", &r2, &c2);
    }
   printf("\nEnter elements: \n");
   for (int i = 0; i < r1; ++i) {
      for (int j = 0; j < c1; ++j) {
         printf("Enter a%d%d: ", i + 1, j + 1);
         scanf("%d", &first[i][j]);
      }
   }
   for (int i = 0; i < r2; ++i) {
      for (int j = 0; j < c2; ++j) {
         printf("Enter a%d%d: ", i + 1, j + 1);
         scanf("%d", &second[i][j]);
      }
   }
   int(*matrixmul)(int[10][10],int[10][10],int,int,int,int)=&multiplyMatrices;
    (matrixmul)(first,second,r1,c1,r2,c2);
}
