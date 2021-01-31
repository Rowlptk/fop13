// check balance
// deposit
// withdraw

#include<stdio.h>
#include<time.h>
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
void checkBalance();
void deposit(float amount);
void withdraw(float amount);

float mainBalance = 2000;

void main() {
    checkBalance();
    deposit(500.34);
    withdraw(230.33);
    delay(10000);
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



