#include<stdio.h>

void main() {
    int n,s,e;
    printf("Enter Multiplication Table number: ");
    scanf("%d",&n);
    printf("Enter Start Point : ");
    scanf("%d",&s);
    printf("Enter End Point: ");
    scanf("%d",&e);
    for(int i = s; i<=e; i++) {
        printf("%d x %d = %d\n",n,i,n*i);
    }
}











