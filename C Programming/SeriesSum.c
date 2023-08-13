#include <stdio.h>

int main()
{
    int n,i, sum = 0;

    // Input the value of n from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum of the first n natural numbers
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("Sum of the first %d natural numbers: %d\n", n, sum);

    return 0;
}

