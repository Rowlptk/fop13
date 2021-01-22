#include<stdio.h>

void main() {

    for(int i=65; i<=69; i++) {
        for(int j=i; j<=68; j++) {
            printf(" ");
        }
        for(int j=129; j<=(2*i-1);j++) {
            printf("%c",i);
        }
        printf("\n");
    }
}






