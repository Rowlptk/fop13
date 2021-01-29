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
    int size;
    int temp, index;
    int max;

    printf("Enter size of an array : ");
    scanf("%d",&size);
    int m[size];
    //int m[5] = {1,2,3,4,5};
    for(int i=0; i< size; i++) {
        printf("m[%d] = ",i);
        scanf("%d",&m[i]);
    }

    /*for(int k=0; k<size; k++) {
        printf("%d ", m[k]);
    }*/

    for(int j=0; j < size; j++) {
        max = m[j];
        index = j;
        for(int i = j+1; i < size ; i++) {
            if(max < m[i]) {
                max = m[i];
                index = i;
            }
        }
        temp = m[j];
        m[j] = max;
        m[index] = temp;


        }



    for(int k=0; k<size; k++) {
        printf("%d ", m[k]);
    }
}

