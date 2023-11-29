#include<stdio.h>
#define M 20
#define N 30
int main()
{
#ifdef M 
printf("\n Since M is defined, hence compiled\n\n");
#else 
printf("\n Sorry!!! Better Luck next time\n"); 
#endif 
#undef M
#ifdef M
printf("\n Since M is defined, hence compiled");
#else 
printf("\n Sorry!!! Better Luck next time\n");
#endif
printf("\n Inside the main function\n");
#undef N
#ifdef M
printf("\n Since M is defined, hence compiled");
#elif N 
printf("\n N is defined \n");
#else 
printf("\n Neither M nor N is defined\n");
#endif
return 0;
}