#include<stdio.h>
void main()
{
    int number;
    printf("enter a number: ");
    scanf("%d", &number);
    printf("\n");
    char a;
    printf("Enter N for negation, R for bitwise >>, O for odd verification, E for Even verification: ");
    scanf("%c", &a);
    switch(a)
    {
    case 'N':
      number = -1 * number;
      printf("%d", number);
    break;
    case 'R':
      printf("%d", number>>3);
      break;
    case 'O':
      if(number%2==0)
      {
        printf("not an odd number");
      }
      else
      {
        printf("an odd number");
      }
      break;
    case 'E':
      if(number%2==0)
      {
        printf("an even number");
      }
      else
      {
        printf("not an even number");
      }
      break;
    default:
      printf("Enter a valid input");
    }
}
