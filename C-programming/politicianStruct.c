#include<stdio.h>
struct doj
{
 int dd;
 int mm;
 int yyyy;
};
struct politician
{
    char name[20];
    char constituency[20];
    int age;
    struct doj joining;
    int winningmargin;


};
void main()
{
    struct politician name1;
    printf("Enter name\n");
    scanf("%s",&name1.name);
    printf("Enter constituency\n");
    scanf("%s",&name1.constituency);
    printf("Enter age\n");
    scanf("%d",&name1.age);
    printf("Enter DOJ\n");
    scanf("%d",&name1.joining.dd);
    scanf("%d",&name1.joining.mm);
    scanf("%d",&name1.joining.yyyy);
    printf("Enter Winning margin:\n");
    scanf("%d",&name1.winningmargin);
    printf("THE RECORD:\n%s\n%s\n%d\n%d\\%d\\%d\n%d\n",name1.name,name1.constituency,name1.age,name1.joining.dd,name1.joining.mm,name1.joining.yyyy,name1.winningmargin);


}