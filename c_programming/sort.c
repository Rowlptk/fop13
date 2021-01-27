/*1 3 2 6 5

max =1 => m[0] ==> max = 6
temp = m[0] => 1
m[0] = max ==> 6
m[3] = temp ==> 1

6 3 2 1 5

max = 3 ==> m[1]

6 5 2 1 3

6 5 3 1 2

6 5 3 2 1
*/
#include<stdio.h>

void main() {
    int m[5] = {1, 3, 2, 6, 5};
    int temp, index;
    int max;
    for(int j=0; j < 5; j++) {
        max = m[j];
        for(int i = j; i < 5 ; i++) {
            if(max < m[i]) {
                max = m[i];
                index = i;
            }
        }
        temp = m[j];
        m[j] = max;
        m[index] = temp;
    }

    for(int j=0; j<5; j++) {
        printf("%d ", m[j]);
    }
}

