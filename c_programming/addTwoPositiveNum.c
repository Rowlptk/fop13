/*
enter first +ve num: -2
enter first +ve num: -3
enter first +ve num: 4

enter second +ve num: -3
enter second +ve num: -5
enter second +ve num: 3

4 + 3 = 7
*/
#include<stdio.h>

void main() {
    int num1, num2;
    do {
        printf("enter first +ve num: ");
        scanf("%d",&num1);
    }while(num1<0);
    printf("\n");
    do {
        printf("enter second +ve num: ");
        scanf("%d",&num2);
    }while(num2<0);

    printf("\n%d + %d  = %d", num1, num2, num1+num2);

}






