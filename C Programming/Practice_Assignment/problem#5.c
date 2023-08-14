#include <stdio.h>

int main()
{
    int n, sum = 0, i;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2)
    {
        sum += i;
    }
    printf("Sum of even numbers from 1 to %d is: %d\n", n, sum);

    return 0;
}
