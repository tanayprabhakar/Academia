/*college details -name
area
no os student
student name
sap id
sort by college student*/
#include<stdio.h>
struct student
{
    char name[20];
    char address[20];
    long sap;
    long rollno;
};
struct college
{
    char cname[50];
    int area;
    int n;
    struct student s1[100];
};

void main()
{
    int n;
    printf("Enter the no of college:\n");
    scanf("%d",&n);  
    struct college c[n];
    for(int i=0;i<n;i++)
    {
    printf("Enter college name:\n");
    scanf("%s",&c[i].cname);
    printf("Enter area:\n");
    scanf("%d",&c[i].area);
    printf("Enter No of student:\n");
    scanf("%d",&c[i].n);
    }
    for(int i=0;i<n;i++)
    {
        printf("For college: %s\n",c[i].cname);
        for(int j=0;j<c[i].n;j++)
    {
        printf("Enter the name of the student:\n");
        scanf("%s",&c[i].s1[j].name);
        printf("Enter the sapid of the student:\n");
        scanf("%ld",&c[i].s1[j].sap);
        printf("Enter the address of the student:\n");
        scanf("%s",&c[i].s1[j].address);
        printf("Enter the rollno of the student:\n");
        scanf("%ld",&c[i].s1[j].rollno);
    }
    }
    for(int i=0;i<n;i++)
    {
        printf("College name: %s Area: %d No of Student: %d\nThe Record:\n",c[i].cname,c[i].area,c[i].n);
        for(int j=0;j<c[i].n;j++)
        {
            printf("%d.%s\t%s\t%ld\t%ld\n",j+1,c[i].s1[j].name,c[i].s1[j].address,c[i].s1[j].sap,c[i].s1[j].rollno);
        }  
    }  
    for (int i = 0; i < n - 1; i++) {  
    for (int j = 0; j < n - i - 1; j++) {  
      if (c[j].area > c[j + 1].area) {  
        struct college temp = c[j];  
        c[j] = c[j + 1];  
        c[j + 1]= temp;  
}
}
printf("College Sorted in ascending order of its area:\n");
for (int i=0;i<n;i++)
{
   printf("%s\n",c[i].cname); 
}
}
}
