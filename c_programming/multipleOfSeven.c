// generate multiple of 7 from 40 to 100

// generate leap year from 1600 to 2100

//((n%400==0)||(n%4 == 0 && n%100!=0))

//

#include<stdio.h>

void main() {
    int n;
    printf("Generate Multiple of: ");
    scanf("%d",&n);
    for(int i = 40; i<=100; i++) {
        if(i%n == 0) {
            printf("%d\n", i);
        }
    }
}








