#include <stdio.h>

int main()
{
    int x, y;

    printf("Enter x: ");
    scanf("%d", &x);

    printf("Enter y: ");
    scanf("%d", &y);

    printf("Even numbers between %d and %d are:\n", x, y);

    for (int i = x; i <= y; i++)
    {
            if(i%2==0)
            {
                printf("%d ",i);
            }
    }

    return 0;
}
