#include<stdio.h>
void main(){
    int x,y;
    int *ptrx,*ptry;
    ptrx=&x;
    ptry=&y;
    printf("Enter two number: ");
    scanf("%d",&x);
    scanf("%d",&y);
    if (*ptrx>*ptry)
    {
        printf("%d",*ptrx);
    }
    else{
        printf("%d",*ptry);
    }
    
}