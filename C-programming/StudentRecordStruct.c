/*Design a structure ‘student_record’ to store student details like name, SAP ID, enrollment 
number, date of registration and data of birth. The element date of joining is defined using another 
structure ‘date’ to store date details like day, month, and year. Get data of ‘n’ students and then print 
the entered values [Hint: Use concept of Nested structures and Array of Structures].*/
#include<stdio.h>
struct doj
{
 int dd;
 int mm;
 int yyyy;
};
struct student_record
{
    char name[20];
    long SapId;
    struct doj dob;
    struct doj joining;
    long enrollment_number;
};
void main()
{
    struct student_record name1;
    printf("Enter name\n");
    scanf("%s",&name1.name);
    printf("Enter SapID\n");
    scanf("%ld",&name1.SapId);
    printf("Enter DOJ\n");
    scanf("%d",&name1.joining.dd);
    scanf("%d",&name1.joining.mm);
    scanf("%d",&name1.joining.yyyy);
    printf("Enter DOB\n");
    scanf("%d",&name1.dob.dd);
    scanf("%d",&name1.dob.mm);
    scanf("%d",&name1.dob.yyyy);
    printf("Enter Enrollment no:\n");
    scanf("%ld",&name1.enrollment_number);
    printf("THE RECORD:\nName: %s\nSapID: %ld\nEnrollment No: %ld\nDOJ: %d\\%d\\%d\nDOB: %d\\%d\\%d\n",name1.name,name1.SapId,name1.enrollment_number,name1.joining.dd,name1.joining.mm,name1.joining.yyyy,name1.dob.dd,name1.dob.mm,name1.dob.yyyy);
}