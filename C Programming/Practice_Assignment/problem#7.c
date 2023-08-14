#include <stdio.h>
#include <math.h>

int main()
{
    int x, y, z;
    float result;
    printf("enter the x:");
    scanf("%d",&x);
    printf("enter the y:");
    scanf("%d",&y);
    printf("enter the z:");
    scanf("%d",&z);

    result=(3*pow(x,9))+ (4*pow(x,3)*sqrt(y))+ (x*pow(y,3)* sqrt(z))- x*y+ 2*z;

    printf("%.2f", result);

    return 0;
}

