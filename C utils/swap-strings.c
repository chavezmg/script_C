#include <stdio.h>
#include <string.h>

int main(){

    char x[15] = "Water";
    char y[15] = "Beer";
    char temp[15];

    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);
    //si la longitud del segundo argumento es menor que el primer
    //argumento, podremos tener error, esto se soluciona
    //asignando = tamaño a todos los arrays

    printf("X: %s\n", x);
    printf("Y: %s\n", y);

    return 0;
}