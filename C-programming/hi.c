#include<stdio.h>
struct library{
    int entry_No;
    char title[100];
    char author[100];
    float price;
    int flag;
};
int main(){
    struct library b1,b2,b3,b4,b5;
    printf("Record for book 1:\n");
    printf("enter entry number:\n");
    scanf("%d",&b1.entry_No);
    printf("enter title:\n");
    scanf("%s",&b1.title);
    printf("enter author:\n");
    scanf("%s",&b1.author);
    printf("enter :\n");
    scanf("%f",&b1.price);
    printf("ENTER IF BOOK IS ISSUED OR NOT:\n");
    scanf("%d",&b1.flag);
   printf("%d\n%s\n%s\n%d\n",b1.entry_No,b1.title,b1.author,b1.flag);
   if(b1.flag==1){
    printf("the book is issued\n");}
    else
    {
      printf("the book is not issued\n");
    }
    printf("Record for book 2:\n");
    printf("enter entry number:\n");
    scanf("%d",&b2.entry_No);
    printf("enter title:\n");
    scanf("%s",&b2.title);
    printf("enter author:\n");
    scanf("%s",&b2.author);
    printf("enter price:\n");
    scanf("%f",&b2.price);
    printf("ENTER IF BOOK IS ISSUED OR NOT:\n");
    scanf("%d",&b2.flag);
   printf("%d\n%s\n%s\n%d\n",b2.entry_No,b2.title,b2.author,b2.price);
 if(b2.flag==1){
    printf("the book is issued\n");}
    else{printf("the book is not issued\n");}

      printf("Record for book 3:\n");
    printf("enter entry number:\n");
    scanf("%d",&b3.entry_No);
    printf("enter title:\n");
    scanf("%s",&b3.title);
    printf("enter author:\n");
    scanf("%s",&b3.author);
    printf("enter price:\n");
    scanf("%f",&b3.price);
    printf("ENTER IF BOOK IS ISSUED OR NOT:\n");
    scanf("%d",&b3.flag);
   printf("%d\n%s\n%s\n%d\n",b3.entry_No,b3.title,b3.author,b3.price);
   if(b3.flag==1){
    printf("the book is issued\n");}
    else{printf("the book is not issued\n");}

      printf("Record for book 4:\n");
    printf("enter entry number:\n");
    scanf("%d",&b4.entry_No);
    printf("enter title:\n");
    scanf("%s",&b4.title);
    printf("enter author:\n");
    scanf("%s",&b4.author);
    printf("enter price:\n");
    scanf("%f",&b4.price);
    printf("ENTER IF BOOK IS ISSUED OR NOT:\n");
    scanf("%d",&b4.flag);
   printf("%d\n%s\n%s\n%d\n",b4.entry_No,b4.title,b4.author,b4.price);
   if(b4.flag==1){
    printf("the book is issued\n");}
    else{printf("the book is not issued\n");}

      printf("Record for book 5:\n");
    printf("enter entry number:\n");
 scanf("%d",&b5.entry_No);
    printf("enter title:\n");
    scanf("%s",&b5.title);
    printf("enter author:\n");
    scanf("%s",&b5.author);
    printf("enter price:\n");
    scanf("%f",&b5.price);
    printf("ENTER IF BOOK IS ISSUED OR NOT:\n");
    scanf("%d",&b5.flag);
   printf("%d\n%s\n%s\n%d\n",b5.entry_No,b5.title,b5.author,b5.price);
   if(b1.flag==1){
    printf("the book is issued\n");}
    else{printf("the book is not issued\n");}
 return 0;
}