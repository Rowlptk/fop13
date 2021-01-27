/*int x; => 23
int y[5] ==> 23 _ _ _ _
      n      0  1 2 3 4
                y

y[0] = 23
*/
#include<stdio.h>

void main() {
    //int ary[5] = {4,7,1,0,-5};
    int ary[5];
    int i;
    //printf("%d\n", ary[2]);
    //ary[2] = 78;
    //printf("%d\n", ary[2]);
    printf("Enter 5 Values : \n");
    for(i = 0; i < 5; i++) {
        printf("ary[%d] = ", i);
        scanf("%d", &ary[i]);
    }
    printf("ary[5] = { ");
    for(int i = 0; i < 5; i++) {
        if(i<4) {
            printf("%d, ", ary[i]);
        } else {
            printf("%d }", ary[i]);
        }
    }

//    6 => even



}
