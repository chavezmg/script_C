#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    //vamos a generar num pseudo aleatorios... 
    //son aleatorios "estadisticamente", no aleatorios puros

    srand(time(0)); //generamos la semilla
                    //si no generamos semilla los numeros serán siempre iguales

    int numero1 = (rand() % 6) +1; // con esto generamos los n aleatorios
                             //el %6 indica que generamos numeros entre 1 y 6
                             //sumamos uno para que no empiece desde cero
    int numero2 = (rand() % 6) +1;
    int numero3 = (rand() % 6) +1;

    printf("%d\n", numero1);
    printf("%d\n", numero2);
    printf("%d", numero3);

}