// you can vote or not

#include<stdio.h>
#include<math.h>
/*
void main() {
    int year, age;
    printf("Enter your Year of Birth : ");
    scanf("%d",&year);
    age = 2021 - year;
    (age>=18)?printf("You can vote!")
            :printf("Sorry! Kid, Try after %d Years!",18-age);
}*/

void main() {
   /* int ramSize;
    printf("Enter amount of ram you need: ");
    scanf("%d",&ramSize);
    ((ramSize>=8)&&(ramSize<=16))?printf("%d gb Ram is Available!", ramSize)
                :printf("Sorry! we currently don't have %d gb ram",ramSize);
    */
    //printf("\n%d",(int)pow(8,2));

    float res = pow(7, 7);
    int res2 = (int) res;
    int rem = res2 % 10;
    printf("Remainder is %d\n", rem);
    printf("Pure integer form %d\n", res2);
    printf("The result is %f", res);
}


