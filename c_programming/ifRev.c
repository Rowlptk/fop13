#include<stdio.h>
/*
if
    if else
    if ... else if.... else
    nested if
    switch case
*/
void main() {
    float num;
    printf("Enter any num : ");
    scanf("%f",&num);
    if(num>0) {
        printf("positive");
    } else if(num<0){
        printf("negative");
    } else {
        printf("zero");
    }
}





