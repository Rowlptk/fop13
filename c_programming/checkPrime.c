#include<stdio.h>

void main() {
    int n;
    int prime = 0;
    printf("Enter any Number : ");
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        if(n%i == 0) {
            prime = 1;
            break;
        }
    }
    if(prime == 0) {
        printf("%d is a Prime No.",n);
    }
    else {
        printf("%d is not a prime number",n);
    }

}

// generate prime from 20 -40




