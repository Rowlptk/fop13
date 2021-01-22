#include<stdio.h>

void main() {
    int n,s,e;
    printf("Enter Multiplication Table number[n*Start=>End]: ");
    scanf("%d*%d=>%d",&n,&s,&e);
    for(int i = s; i<=e; i++) {
        printf("%d x %d = %d\n",n,i,n*i);
    }
}
