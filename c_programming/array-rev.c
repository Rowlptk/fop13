#include<stdio.h>

void main() {
    int ary[5] = {10,22,3,64,5};
    int ary2[3][2] = {
                        {45,67},
                        {34,11},
                        {0,-1}
                    };
    printf("%d\n",ary2[1][1]);
    ary2[1][1] = 900;
    printf("%d\n",ary2[1][1]);
    printf("%d",ary[3]);
    ary[3] = 56;
    printf("\n%d",ary[3]);
}
