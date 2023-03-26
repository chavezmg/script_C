/*
Convierte numeros en formato string en formato INT
el numero debe tener 4 caracteres maximo (nuestra aplicacion lo requeria)
- la funcion power es para sacar sacar la potencia de un numero
- llamar a la funcion conversor enviando el numero en formato string como
parametro
*/
#include <stdio.h>
#include "conversor_char_int.h"

int power(int num, int pow){
    if (pow==0){
        return 1;
    }
    else if (pow<0){
        return 0;
    }
    
    int result=1;
    for(int i=0; i<pow; i++){
        result *= num;
    }
    return result;
}

int conversor(char dato[]){
    int num1,num2,num3,num4;
    int tam_num;

    tam_num = strlen(dato);

    num1 = ((int)dato[0]-48)*power(10, tam_num-1);
    num2 = ((int)dato[1]-48)*power(10, tam_num-2);
    num3 = ((int)dato[2]-48)*power(10, tam_num-3);
    num4 = ((int)dato[3]-48)*power(10, tam_num-4);
    num1 = num1+num2+num3+num4;
    return num1;
}
