/* Read radius from user and find the area of circle

**Similar Problem: Trapezium Area, Square Area, Surface area and volume of a cylinder*/

#include <stdio.h>
#include<math.h>
int main()
{
    float r, area;

    printf("Enter the radius: ");
    scanf("%f",&r);

    area=3.1416*pow(r,2);

    printf("The area for given radius %f is %.3f",r,area);

    return 0;
}

