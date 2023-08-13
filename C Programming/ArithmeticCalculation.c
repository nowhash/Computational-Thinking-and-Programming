/* Read two numbers from user and find addition, multiplication, subtraction, quotient and remainder*/

#include <stdio.h>

int main()
{
    int num1,num2,addition,subtraction,multiplication,quotient,remainder;
    printf("Enter number 1: ");
    scanf("%d",&num1);

    printf("Enter number 2: ");
    scanf("%d",&num2);

    addition=num1+num2;
    subtraction=num1-num2;
    multiplication=num1*num2;
    quotient=num1/num2;
    remainder=num1%num2;

    printf("Addition = %d\n",addition);
    printf("Subtraction = %d\n",subtraction);
    printf("Multiplication = %d\n",multiplication);
    printf("Quotient = %d\n",quotient);
    printf("Remainder = %d\n",remainder);

    return 0;
}
