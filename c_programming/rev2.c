// Area of Circle

#include<stdio.h>
#include<math.h>
#define PI 3.1416

void main() {
    float radius, areaOfCircle, diameter;
    printf("Enter a diameter : ");
    scanf("%f",&diameter);
    radius = diameter/2;
    areaOfCircle = PI*pow(radius, 2);

    printf("radius = %.2f/2 = %.2f\n",diameter, radius);
    printf("Area = %.2f*pow(%.2f,2) = %.2f",PI,radius,areaOfCircle);
}



