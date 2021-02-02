// check balance
// deposit
// withdraw

#include<stdio.h>
#include<time.h>


void delay(unsigned int mseconds);
void checkBalance();
void deposit(float amount);
void withdraw(float amount);
float userAmount();
void menu();
void proceed();

float mainBalance = 2000;

void main() {
    menu();
}

void proceed() {
    char ch;
    printf("\nPress Y to continue... \n");
    scanf(" %c",&ch);
    if(ch == 'Y' || ch == 'y') {
        system("cls");
        menu();
    }
}

void menu() {
    int n;
    printf("Press:\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n Select : ");
    scanf("%d",&n);
    switch(n) {
    case 1:
        checkBalance();
        break;
    case 2:
        deposit(userAmount());
        break;
    case 3:
        withdraw(userAmount());
        break;
    case 4:
        exit(0);

    default:
        system("cls");
        menu();
    }

    proceed();

}


float userAmount() {
    float amount;
    printf("Enter Amount : ");
    scanf("%f",&amount);
    return amount;
}


void withdraw(float amount) {
    mainBalance = mainBalance - amount;
    printf("\nAmount Deducted : $%.2f\n",amount);
    checkBalance();
}

void deposit(float amount) {
    mainBalance = mainBalance + amount;
    printf("\nDeposited Amount : $%.2f\n", amount);
    checkBalance();
}

void checkBalance() {
    printf("\nYour Balance is $%.2f\n", mainBalance);
}

void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}


