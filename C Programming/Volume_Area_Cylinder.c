/* Read r and h and find area and volume of a cylinder

**Similar Problem: Trapezium Area, Square Area, triangle area*/

#include <stdio.h>
#include<math.h>
int main()
{
    float r, h,area,volume;

    printf("Enter r: ");
    scanf("%f",&r);

    printf("Enter h: ");
    scanf("%f",&h);

    area= (2*3.1416*r*h)+(2*3.1416*pow(r,2));
    volume=3.1416*pow(r,2)*h;

    printf("The area is: %.2f and volume is %.2f",area,volume);

    return 0;
}


