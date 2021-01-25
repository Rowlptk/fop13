//armstrong ==> 153==> 1^3 + 5^3 + 3^3 => 1 + 125+27 =>153
#include<stdio.h>

void main() {
    int n, count=0, temp,r;
    float sum = 0;
    printf("Enter any number : ");
    scanf("%d", &n);
    temp = n;

    while(temp!=0) {
        temp = temp/10;
        count++;
    }
    printf("%d\n",count);
    temp = n;
    while(n!=0) {
        r = n%10;
        n = n/10;
        sum = sum + pow(r,count);
    }
    if(temp == (int)sum) {
        printf("%d is a armstrong number",temp);
    } else {
        printf("%d is not a armstrong number",temp);
    }

}
