#include <stdio.h>

int main()
{
    int n,i;

    // Input the value of n from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Print the series of numbers from 1 to n
    printf("Series of %d numbers:\n", n);
    for (i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
    return 0;
}
