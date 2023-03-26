#include <stdio.h>

int main(){
    double prices[] = {5.0, 4.5, 3.2, 1.5, 9.1, 6.5, 3.3};

    printf("size of prices: %d bytes", sizeof(prices));

    for(int i=0; i<sizeof(prices)/sizeof(prices[0]); i++){
        printf("\n%d", i);
    }
    //con ese codigo imprimimos todo lo del array sin asignar una condicion
    //especifica al for porque el valor se toma del tamaño del array

    return 0;
}