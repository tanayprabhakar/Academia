/*wap that creates a structure and a unions with same fields by providing suiatable and union showcase the differnce between them*/
#include<stdio.h>
 union unionNameAgeSalary
 {
    char name[10];
    int age ;
    float salary;
    double annualincome;
 };
  struct unionNameAge
 {
    char name[10];
    int age ;
    float salary;
    double annualincome;
 };
 
 void main()
 {
    union unionNameAgeSalary p1;
    struct unionNameAge p2;
    printf("Name:\n");
    scanf("%s",p1.name);
    printf("Age:\n");
    scanf("%d",&p1.age);
    printf("Salary\n");
    scanf("%f",&p1.salary);
    printf("Annual Income:\n");
    scanf("%lf",&p1.annualincome);
    printf("Name:\n");
    scanf("%s",p2.name);
    printf("Age:\n");
    scanf("%d",&p2.age);
    printf("Salary\n");
    scanf("%f",&p2.salary);
    printf("Annual Income:\n");
    scanf("%lf",&p2.annualincome);
    printf("UNION:\n");
    printf("Name 1: %s : %d\n",p1.name,sizeof(p1.name));
    printf("Age 1: %d : %d\n",p1.age,sizeof(p1.age));
    printf("Salary 1: %f : %d\n",p1.salary,sizeof(p1.salary));
    printf("Annual Income 1: %lf : %d\n",p1.annualincome,sizeof(p1.annualincome));
    printf("STRUCT:\n");
    printf("Name 2: %s : %d\n",p2.name,sizeof(p2.name));
    printf("Age 2: %d : %d\n",p2.age,sizeof(p2.age));
    printf("Salary 2: %f : %d\n",p2.salary,sizeof(p2.salary));
    printf("Annual income 2: %lf : %d\n",p2.annualincome,sizeof(p2.annualincome));
 }