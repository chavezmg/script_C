#include <stdio.h>

void hello(char[], int);


int main(){

    int age = 21;
    char name[] = "Matias";
    hello(name, 21);
    return 0;
}

void hello(char name[], int age){
    printf("\nHello %s", name);
    printf("\nYou are %d years old", age);
}