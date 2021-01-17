#include<stdio.h>
// check vowel or consonant
void main() {
    char op;
    int x, y;
    printf("Enter expression(eg: 23+34): ");
    scanf("%d %c%d",&x,&op,&y);
    switch(op) {

    case '+':
        printf("%d",x+y);
        break;

    case '-':
        printf("%d",x-y);
        break;

    case '*':
        printf("%d",x*y);
        break;

    case '/':
        printf("%d",x/y);
        break;

    default:
        printf("invalid Operator!");
    }
}

