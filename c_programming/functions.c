//functions ==> small block of code
//==>

/*
function declaration
function definition
function call
*/

// parametrized
// parameterless

// void, int, float, char

#include<stdio.h>

// function declare
void printing();
void printing2(char str[10]);
int add(int num1, int num2);

void main() {
    // function call
    printing2("World1");
    int res = add(99,55);
    printf("sum = %d",res);
}

int add(int num1, int num2) {
    return num1+num2;
}

void printing2(char str[10]) {
    printf("Hello %s", str);
}

// function definition
void printing() {
    printf("I'm a Function!");
}






