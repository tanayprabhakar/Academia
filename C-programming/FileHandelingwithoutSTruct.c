#include<stdio.h>
void main()
{
    char name[100];
    long SapId;
    int marks;
    int n;
    printf("Enter the number of students:");
    scanf("%d",&n);
    FILE *in;
    in=fopen("StuRecord.txt","a");
    for(int i = 0;i<n;i++)
    { 
        printf("Enter Name:\n");
        scanf("%s",&name);
        printf("Enter SAPID:\n");
        scanf("%ld",&SapId);
        printf("Enter marks:\n");
        scanf("%d",&marks);
        fprintf(in,"%s",name);
        fprintf(in,"\t");
        fprintf(in,"%ld",SapId);
        fprintf(in,"\t");
        fprintf(in,"%d",marks);
        fprintf(in,"\n");
    }
}