/*WAP that multiplies two int vectors of the length via a user defined(using malloc and callloc) function accepting vectors as input 
call the function using a pointer*/
#include<stdio.h>
#include<stdlib.h>
void multiplyVectors(int vec1[], int vec2[], int n) {
    int *result = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        result[i] = vec1[i] * vec2[i];
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }
    free(result);
}
void main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *vec1 = (int *)calloc(n, sizeof(int));
    int *vec2 = (int *)calloc(n, sizeof(int));

    printf("Enter the elements of the first vector: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vec1[i]);
    }

    printf("Enter the elements of the second vector: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vec2[i]);
    }
    int(*vec)(int[], int[], int)=&multiplyVectors;
    (vec)(vec1, vec2,  n);
}
