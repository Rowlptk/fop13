
//1 4 9 16 25 36 49 64 81 100
//1 4 27 16 125 36 .. 64 .. 100

// even => sq, odd ==> cube

#include<stdio.h>

void main() {
    for(int i =1; i<=10; i++) {
        if(i%2 == 0) {
            printf("%d ",i*i);
        } else {
            printf("%d ",i*i*i);
        }
    }
}
