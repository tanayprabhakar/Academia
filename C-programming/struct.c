#include<stdio.h>
struct student
{
    char name[20];
    char address[20];
    long sap;
    long rollno;
};
void main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    struct student name[n];
    for(int i=0;i<n;i++)
    {
    printf("Enter name\n");
    scanf("%s",&name[i].name);
    printf("Enter address\n");
    scanf("%s",&name[i].address);
    printf("Enter Sap\n");
    scanf("%d",&name[i].sap);
    printf("Enter roll no\n");
    scanf("%d",&name[i].rollno);
    }
    for(int i=0;i<n;i++)
    {
    printf("THE RECORD:\n%s\n%s\n%ld\n%ld\n",name[i].name,name[i].address,name[i].sap,name[i].rollno);
    }  
}