/*
A ==> 80-100 (n>=80 && n<=100)
B ==> 60-79 (n>=60 && n<80)
C ==> 40-59 (n>=40 && n<60)
F ==> 0-39 (n>=0 && n<40)
invalid 0-,100+
*/
#include<stdio.h>

void main() {
    float per;
    printf("Enter your percentage : ");
    scanf("%f",&per);
    if(per>=80 && per<=100) {
        printf("Grade A!");
    } else if(per>=60 && per<80) {
        printf("Grade B!");
    } else if(per>=40 && per<60) {
        printf("Grade C!");
    } else if(per>=0 && per<40) {
        printf("Sorry! You Failed!");
    } else {
        printf("This percentage doesnot exists!");
    }
}

// check whether a number is +ve, -ve or zero



