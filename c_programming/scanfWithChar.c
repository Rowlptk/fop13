#include<stdio.h>
#include<time.h>

void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

void main() {
    int x;
    char ch;
    printf("Enter Int : ");
    scanf("%d",&x);
    printf("Enter char : ");
    scanf("\n%c",&ch);
    delay(200);

}



