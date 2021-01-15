// nested if
// multiple of 3
// multiple of 9

#include<stdio.h>

void main() {
    int num;
    printf("enter any num : ");
    scanf("%d",&num);
    if(num%3 == 0)
    {
        printf("multiple of 3");
        if(num%9 == 0)
        {
            printf("multiple of 3 and 9");
        }
        else
        {
            printf("multiple of 3 but not 9");
        }

    }
    else
    {
        printf("not a multiple of 3");
    }
}

/*
i =2
a = ++i + ++i
 ++i => i = i+ 1 => 3 ==> i = 3
 +
 ++i ==> i = i+ 1 =  4 => i = 4
 3 + 4 ==> 7

 a = ++i + i++
 ++i => i = i+ 1 => 3 ==> i = 3
 +
 i++

 ++i + i ==> 3 + 3 => 6

 a = i++ + ++i

 a = i++

 i = 3
 i = 4
 7
*/












