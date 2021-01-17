/*please enter +ve value: -5
please enter +ve value: -2
please enter +ve value: -3
please enter +ve value: 1

you entered 1!
*/
#include<stdio.h>

void main() {
    int n;
    do {
        printf("Please enter +ve value: ");
        scanf("%d",&n);
    }while(n<0);
    printf("You entered %d!",n);
}



enter first +ve num: -2
enter first +ve num: -3
enter first +ve num: 4

enter second +ve num: -3
enter second +ve num: -5
enter second +ve num: 3

4 + 3 = 7
