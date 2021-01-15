#include<stdio.h>

void main() {
    int usr, pwd;
    printf("Enter username : ");
    scanf("%d", &usr);
    if(usr == 456)
    {
        printf("Username exists!");
        printf("Enter password: ");
        scanf("%d",&pwd);
        if(pwd == 123) {
            printf("welcome!");
        } else {
            printf("Incorrect password!");
        }

    }
    else
    {
        printf("Username is not available!");
    }
}


2020-02-29
2020-05-31
2020-04-31





