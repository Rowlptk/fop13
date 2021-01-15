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
            if((d>=1 && d<=31)&&(m==1 ||m==3 ||m==5|| m==7 || m==8|| m==10 || m==12)) {
                printf("Valid Date");
            } else if ((d>=1 && d<=30)&&(m==4 || m==6 || m==9 ||m==11)) {
                printf("Valid Date");
            } else if ((d>=1 && d<=28)&&(m==2)) {
                printf("Valid Date");
            } else if ((d>=1 && d<=29)&&(m==2)&&((y%400==0)||(y%4==0 && y%100!=0))) {
                printf("Valid Date");
            } else {
                printf("InValid Day");
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
