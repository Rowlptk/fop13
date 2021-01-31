#include<stdio.h>
#include<string.h>

void main()
{
    char usr[3][10] = {"admin", "dell", "user"};
    char myUsr[10];
    char indicator = 'F';
    printf("Enter Username : ");
    gets(myUsr);
    for(int i = 0; i < 3; i++) {
        if(strcmp(usr[i],myUsr) == 0) {
            indicator = 'T';
            break;
        }
    }
    if(indicator == 'T') {
        printf("Username Exist!");
    } else {
        printf("Username doesnot exist!");
    }
}
