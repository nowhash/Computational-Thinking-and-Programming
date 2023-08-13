//Program to find factorial of a number
#include <stdio.h>

int main()
{
    int n;
    int factorial = 1;

    // Input the value of n from the user
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Calculate the factorial of n

    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }

    printf("Factorial of %d is %llu\n", n, factorial);


    return 0;
}

