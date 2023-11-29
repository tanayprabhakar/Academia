#include<stdio.h>
void main()
{
    float number1, number2, answer;
    printf("enter a number: ");
    scanf("%f", &number1);
    printf("\n");
    printf("enter another number: ");
    scanf(" %f", &number2);
    printf("\n");
    char a;
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Simplification \nYour Input: ");
    scanf(" %c", &a);
    switch(a)
    {
    case '1':
      answer = number1 + number2;
      printf("Answer: %f", answer);
    break;
    case '2':
      answer = number1 - number2;
      printf("Answer: %f", answer);
      break;
    case '3':
      answer = number1 * number2;
      printf("Answer: %f", answer);
      break;
    case '4':
      answer = number1 / number2;
      printf("Answer: %f", answer);
      break;
    case '5':
      answer = number1*number2/(number1+number2)/(number2-number2);
      printf("Answer: %f", answer);
      break;
    default:
      printf("Enter a valid input");
    }
}
