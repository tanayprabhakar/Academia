/*Design a structure ‘product’ to store the details of the product purchased like product name, price 
per unit, number of quantities purchased, and amount spent. Get the name, price per unit, and number 
of quantities of the product purchased. Calculate the amount spent on the product and then display 
all the details of the procured product using structure pointers.*/
#include<stdio.h>
struct product
{
    char name[1000];
    int qty;
    float amtSpent, amtPerUnit;
};
void main()
{
    struct product purchase;
    printf("Enter purchased product:\n");
    scanf("%s",&purchase.name);
    printf("Enter amt of one:\n");
    scanf("%f",&purchase.amtPerUnit);
    printf("Enter the qty:\n");
    scanf("%d",&purchase.qty);
    purchase.amtSpent=purchase.amtPerUnit*purchase.qty;
    printf("Purchased product %s\n",purchase.name);
    printf("Product Price %2.f\n",purchase.amtPerUnit);
    printf("Qty: %d\n",purchase.qty);
    printf("Total amount: %2.f\n",purchase.amtSpent);
}