// while, do.. while, for
#include<stdio.h>

void main() {
    int i = 11;
    while(i<=10) {
        //printf("%d ", i);
        printf("%d x %d = %d\n", 2, i, 2*i);
        i++;
    }
    printf("\nlast value of i = %d\n", i);
    i = 10;
    while(i>=1) {
        printf("%d ", i);
        i--;
    }
}


//%d x %d = %d, 2, i, 2*i

