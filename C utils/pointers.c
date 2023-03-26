#include <stdio.h>

void printAge(int *pAge){

    printf("valor pasado por argumento: %d\n", *pAge);
}


int main(){

    //pointer = es "tipo" una variable de referencia que contiene la
    //          direccion de memoria de otra variable
    //          se utiliza porque muchas tareas son mas faciles con ellos
    //          * es el operador (significa valor en la direccion)

    int age = 21;

    printf("Adress of age: %p\n", &age);
    printf("Value of age: %d\n", age);
    
    //declaramos puntero que almacene la direccion de memoria de Age
    int *pAge = &age;

    printf("Adress of pAge: %p\n", &pAge); //la direccion de memoria del puntero es distinta
    printf("Value at stored adress: %d\n", *pAge); //el valor llamando a * es el mismo

    //en sintensis el puntero guarda la direccion de memoria de otra variable
    //si llamamos solo al puntero obtenemos la direccion a la que apunta
    //si llamamos al puntero con * obtenemos el valor guardado en la direccion
    //a la que apunta
    //el tipo de datos del puntero debe ser igual al tipo de la variable
    //que apunta
    //tambien podemos pasar un puntero como argumento de una funcion

    printAge(pAge);

    //es buena practica declarar los punteros como NULL, ej:
    //char *pAge = NULL;
    //pAge = &age;  acá le asignamos el valor
    
    return 0;
}