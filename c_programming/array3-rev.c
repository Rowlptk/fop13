#include<stdio.h>


void main() {
    int m[6], max, sMax, index=0;
    printf("Enter 6 Valaues : \n");
    for(int i=0; i<6; i++) {
        scanf("%d",&m[i]);
    }
    max = m[0];
    printf("M Array: ");
    for(int i=1; i<6; i++) {
        if(max < m[i]) {
            max = m[i];
            index = i;
        }
    }
    printf("Max = %d", max);

    if(max!=m[0]) {
        sMax = m[0];
    } else {
        sMax = m[1];
    }

    for(int i=0; i<6; i++) {
        if(sMax < m[i] && i!= index) {
            sMax = m[i];
        }
    }
    printf("\nSecond Max = %d", sMax);
}


1 3 2 6 5

6 3 2 1 5

6 5 2 1 3

6 5 3 1 2

6 5 3 2 1
