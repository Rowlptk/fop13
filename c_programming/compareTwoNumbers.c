/*
Enter two numbers: 23 32

32 is greater than 23*/

#include<stdio.h>

void main() {
    int num1, num2;
    printf("Enter two numbers : ");
    scanf("%d%d",&num1,&num2);
    if(num1>num2)
    {
        printf("%d is greater than %d",num1,num2);
    }
    else
    {
        printf("%d is greater than %d",num2,num1);
    }
}
