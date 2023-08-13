//Write a C program to read an integer n from user and count all the available even numbers between 1 to n.


#include <stdio.h>

int main()
{
    int n, i, count = 0;

    // Input the value of n from the user
    printf("Enter an integer n: ");
    scanf("%d", &n);

    // Count the even numbers between 1 and n
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)   // Check if the current number (i) is even
        {
            count=count+1; // Increment the count of even numbers
        }
    }

    // Display the count of even numbers between 1 and n
    printf("Number of even numbers between 1 and %d: %d\n", n, count);

    return 0;
}
