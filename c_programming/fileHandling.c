#include<stdio.h>

void main() {
    FILE *fp;
    char str[40];
    char ch;
    int blnc,x;

    //fp = fopen("exp.txt", "a");
    //fprintf(fp,"World!");
    //fclose(fp);


    fp  = fopen("account.txt", "r");

    if(fp == NULL) {
        printf("File Not Found!");
        exit(0);
    }

    /*fscanf(fp, "%s", str);

    puts(str);

    rewind(fp);
    while(!feof(fp))
    {
        ch = fgetc(fp);
        putchar(ch);
    }
    */

    /*fscanf(fp,"%d",&blnc);
    printf("Mero Balance = %d",blnc);
    */

    //printf("%d",fscanf(fp,"%d",&blnc));
    //while(fscanf(fp,"%d",&blnc) == 1);
    // {
        /*if(blnc == 200) {
            printf("%d exist!",blnc);
        }*/
        //printf("%d\n",blnc);
    //}

    //printf("%d\n",blnc);


    // initial value
    fscanf(fp,"%d",&blnc);

    // last value
    while(fscanf(fp,"%d",&blnc) == 1);

    // mid values
    while(fscanf(fp,"%d",&blnc) == 1) {
        if(condition) {

        }
    }







/*
    0
    1000
    1000
    200
    800
*/







}
