#include <stdio.h>
#include <math.h>

int main()
{
    int x;
    float result;

    printf("Enter x: ");
    scanf("%d",&x);

    result=3*pow(x,4)+2*sqrt(x)-2;

    printf("Result = %.3f",result);

    return 0;
}
