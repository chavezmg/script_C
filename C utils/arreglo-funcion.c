#include <stdio.h>
#include <string.h>

void *leer(int[]);

int main(){
    int arreglo[4];
    int numero = 1;
    int digit1,digit2,digit3,digit4;

    if(numero>0){
        digit4 = numero%10;}
    else{
        digit4 = 0;
    }

    int a = numero/10;
    if(numero>9){
        digit3 = a%10;  
    }
    else{
        digit3 = 0;
    }

    int b = a/10;
    if(numero>99){
        digit2 = b%10;  
    }
    else{
        digit2 = 0;
    }

    int c = b/10;
    if(numero>999){
        digit1 = c%10;
    }
    else{
        digit1 = 0;
    }

    printf("%d\n", digit1);
    printf("%d\n", digit2);
    printf("%d\n", digit3);
    printf("%d\n", digit4);

    leer(arreglo);
    for(int i=0; i<4; i++){
        printf("%d", arreglo[i]);
    }
    char letra = 'z';
    int num = 15;

    //printf("\n%x, %x", letra, num);
    printf("\n");
    char cadena [] = "Hola me llamo matias";
    char cadena2 [100];
    int k=0;
    strrev(cadena);
    for(int j=0; j<strlen(cadena); j++){
        sprintf(cadena2 + k ,"%02X", cadena[j]);
        k+=2;
    }
    printf(cadena);
    printf("\n");
    printf(cadena2);
    return 0;
}

void *leer(int arreglo[]){
    arreglo[0] = 5;
    arreglo[1] = 6;
    arreglo[2] = 3;
    arreglo[3] = 2;
}