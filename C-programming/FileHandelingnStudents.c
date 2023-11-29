#include<stdio.h>
typedef struct
{
    char name[100];
    long SapId;
    int marks;
}info;

void main()
{
    int n;
    printf("Enter the number of students:");
    scanf("%d",&n);
    FILE *in;
    in=fopen("StuRecord.txt","a");
    info details[n];
    for(int i = 0;i<n;i++)
    {
        
        printf("Enter Name:\n");
        scanf("%s",&details[n].name);
        printf("Enter SAPID:\n");
        scanf("%ld",&details[n].SapId);
        printf("Enter marks:\n");
        scanf("%d",&details[n].marks);
        fprintf(in,"%s",details[n].name);
        fprintf(in,"\t");
        fprintf(in,"%ld",details[n].SapId);
        fprintf(in,"\t");
        fprintf(in,"%d",details[n].marks);
        fprintf(in,"\n");
    }
}