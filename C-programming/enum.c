#include<stdio.h>
void main()
{
typedef int age;
age a=108;
enum days{mon=10, tue, wed=50, thur, fri, sat,sun} d1;
typedef enum boolean{false, true} logical;
enum boolean t=false;
enum days d2, d3;
logical v=true;
d1=wed;
d2=sat;
d3=sun;
printf("%d\t%d\n",d1,d2);
printf("%d %d %d \n",t, v, a);
}