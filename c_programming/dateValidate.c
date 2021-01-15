#include<stdio.h>

void main() {
    int y, m, d;
    printf("Enter a date[YYYY-MM-DD] : ");
    scanf("%d-%d-%d",&y,&m,&d);
    //printf("Year=%d\nmonth=%d\nday=%d",y,m,d);
    if(y>=1000 && y<=9999) {
        printf("Valid year\n");
        if(m>=1 && m<=12) {
            printf("Month is Valid!\n");
            if(d>=1 && d<=30) {
                printf("Day is Valid!");
            }
            else{
                printf("Day is Invalid!");
            }
        }
        else{
            printf("Invalid Month!");
        }
    }
    else
    {
        printf("Invalid year");
    }
}
