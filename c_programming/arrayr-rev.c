#include<stdio.h>

void main() {
    int m[5];
    printf("Enter 5 Values: \n");
    for(int i=0; i<5; i++) {
        printf("m[%d] = ",i);
        scanf("%d",&m[i]);
    }
    printf("Values Of M array are: \n");
    for(int i=0; i<5; i++) {
        printf("%d ",m[i]);
    }
    // data filter ==> even
    printf("\nEven Numbers in M array are: \n");
    for(int i=0; i<5; i++) {
        if(m[i]%2 == 0) {
            printf("%d ",m[i]);
        }
    }
}











