#include <stdio.h>
#include <string.h>

int main(){

    char name[25];

    printf("\nCual es tu nombre? ");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    while (strlen(name) == 0){
        printf("Ingresa un nombre valido");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';
    }

    printf("Hola %s", name);

    return 0;
}