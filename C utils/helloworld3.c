#include <stdio.h>
#include <string.h>

int main(){

    int age;
    char name[25];
    printf("\n What is your name?: ");
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0'; //quitamos el retorno
    printf("\nYour name is %s, bienvenido", name);
    return 0;
}