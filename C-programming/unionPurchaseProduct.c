#include<stdio.h>
union Product
{
    char name[100];
    float pricePerunit;
    int qty;
    float totalamt;
};
void main()
{
    union Product details;
    union Product *pointer = &details;
    printf("Name: ");
    scanf("%s",pointer->name);
    printf("Price per unit: ");
    scanf("%f",&pointer->pricePerunit);
    printf("Qty: ");
    scanf("%i",&pointer->qty);
    details.totalamt=details.pricePerunit*details.qty;
    printf("%s\n",pointer->name);
    printf("%f\n",pointer->pricePerunit);
    printf("%d\n",pointer->qty);
    printf("%f\n",pointer->totalamt);
}