/*SI = (P*t*r)/100;

P =2, t=3, r=4

SI = (2*3*4)/100 = 0.24
*/
#include<stdio.h>

void main() {
    float p,t,r,SI;
    /*printf("Enter Principal Amount : ");
    scanf("%f", &p);
    printf("Enter Time : ");
    scanf("%f", &t);
    printf("Enter Rate : ");
    scanf("%f", &r);*/
    printf("Enter P, T and R: ");
    scanf("%f%f%f",&p,&t,&r);
    SI = (p*t*r)/100;
    printf("SI = %.f\n",SI);
    printf("SI = (%.2f*%.2f*%.2f)/100 = %.2f",p,t,r,SI);
}
