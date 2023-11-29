#include<stdio.h>
void main()
{
    float marks, percentage;
    printf("enter your 10 + 2 percentage\n");
    scanf("%f", &marks);
    percentage = (marks/500.0)*100.0;
    printf("Your 10+2 percentage = %f\n", percentage);
    if (percentage >= 55)
    {
        if (percentage >=85)
        {
            printf("Outstanding\n");
        }
        else if (percentage >= 75)
        {
            printf("A+");
        }
        else if (percentage >= 65)
        {
            printf("A");
        }
        else
        {
            printf("B+");
        }    
    }
    else
    {
        printf("Reattempt");
    }
}
