#include<stdio.h>

void main() {
    int year;
    printf("Enter any Year: ");
    scanf("%d",&year);
    if((year%400 == 0)||(year%4 == 0 && year%100 !=0))
    {
        printf("%d is a leap year", year);
    }
    else
    {
        printf("%d is not a leap year", year);
    }
}


2020-02-29

1 31
2 28/29
3 31
4 30
5 31
6 30
7 31
8 31
9 30
10 31
11 30
12 31


1000 - 9999
1 - 12
1 - 30



31 ==> 1,3,5,7,8,10,12
30 ==> 4,6,9,11
28 ==> 2
29 ==> 2 (leap)

if((d>=1 && d<=31)&&(m==1 ||m==3 ||m==5|| m==7 || m==8|| m==10 || m==12)) {
        valid
} else if ((d>=1 && d<=30)&&(m==4 || m==6 || m==9 ||m==11) {
        valid
} else if ((d>=1 && d<=28)&&(m==2)) {
        valid
} else if ((d>=1 && d<=29)&&(m==2)&&((y%400==0)||(y%4==0 && y%100!=0))) {
        valid
} else {
    invalid
}






