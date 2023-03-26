#include <stdio.h>

int main(){
    // memory = es un arreglo de bytes dentro de la RAM (ej una calle)
    // memory block = una unidad (byte) dentro de la memoria, usada para almacenar un valor (ej una persona)
    // memory adress = la direccion a donde se ubica el bloque de memoria (ej la direccion de la casa)

    char a = 'X';
    short b = 'Y';
    double c = 'Z';

    printf("%d bytes \n", sizeof(a));   //1 byte es un solo bloque de memoria
    printf("%d bytes \n", sizeof(b));   //dependiendo el tipo de dato ocupa mas bloques
    printf("%d bytes \n", sizeof(c));
    printf("%d bytes \n", sizeof(c));

    printf("Direcciones de memoria: \n");
    printf("%p\n", &a);      //& indica direccion de memoria
    printf("%p\n", &b);      //las direcciones de memoria se expresan en hexadecimal
    printf("%p\n", &c);
    
    char arreglo1[3];
    double arreglo2[3];

    printf("** Ahora con arreglos: \n");
    printf("%d bytes \n", sizeof(arreglo1));
    printf("%d bytes \n", sizeof(arreglo2));
    printf("Direcciones de memoria: \n");
    printf("%p\n", &arreglo1);      //las direcciones de memoria se expresan en hexadecimal
    printf("%p\n", &arreglo1);

    return 0;
}