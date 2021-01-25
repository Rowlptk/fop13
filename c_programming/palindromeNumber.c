/*0 1 1 2 3 5 8 13 21 palindrome

a = 0;
b = 1;
temp = a+b;
a = b;
b = temp;
temp = a + b;
*/

#include<stdio.h>

void main() {
    int a = 0, b = 1;
    int temp = a + b;
    printf("%d %d %d",a,b,temp);
    while(1) {
        a = b;
        b = temp;
        temp = a + b;
        if(temp > 30) {
            break;
        }
        printf(" %d", temp);
    }
}
