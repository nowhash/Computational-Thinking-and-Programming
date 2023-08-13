//Write a C program to find the sum of all integers greater than 100 and less than 200 that are divisible by 9.

#include <stdio.h>

int main()
{
    int num, sum = 0;

    // Iterate through numbers from 101 to 199
    for (num = 101; num < 200; num++)
    {
        if (num % 9 == 0)
        {
            sum = sum + num;
        }
    }

    printf("Sum of integers greater than 100 and less than 200 that are divisible by 9: %d\n", sum);

    return 0;
}

