#include<stdio.h>
#define PI 3.1416

void main() {
    float radius, area;
    printf("Enter radius of Circle : ");
    scanf("%f",&radius);
    area = PI * radius * radius;
    printf("Area is %f", area);
}
