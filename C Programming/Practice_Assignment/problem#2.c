#include <stdio.h>

int main()
{
    int i, n, evenCount = 0, oddCount = 0;

    printf("Enter n: ");
    scanf("%d",&n);

    for (i=1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }

    printf("Number of even numbers: %d\n", evenCount);
    printf("Number of odd numbers: %d\n", oddCount);

    return 0;
