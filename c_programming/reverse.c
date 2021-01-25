/*123
// reverse a number
321

123

321

n = 123
rev = 0
r = n%10 ==> 3
n = n/10 ==> 12

rev = rev * 10 + r => 3
r = n%10 ==> 2
n = n /10 ==> 1
rev = rev * 10 + r =>32
*/
#include<stdio.h>
void main() {
    int n,r,rev = 0;
    printf("Enter any number : ");
    scanf("%d",&n);
    while(n!=0) {
        r = n%10;
        n = n/10;
        rev = rev * 10 + r;
    }
    printf("%d",rev);
}






