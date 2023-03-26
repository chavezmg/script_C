#include <stdio.h>
#include <string.h>

enum Day{Dom=1, Lun=2, Mar=3, Mie=4, Jue=5, Vie=6, Sab=7};
//cada valor de enum esta relacionado a un indice

int main(){
//enum = un tipo de datos enteros definidos por el usuario que ayudan
//       a hacer mas legible el codigo
//si trabajamos con enum hay que tratarlos como enteros al usarlos

    enum Day hoy = Sab;
    
    printf("Hoy es el dia numero %d\n", hoy);

    if(hoy == 1 || hoy ==7){        //puedo usar numeros..
        printf("Es fin de semana!");
    }
    else{
        printf("Tengo que trabajar hoy..");
    }

    if(hoy == Dom || hoy == Sab){   //o la palabra asociada, mas facil de leer
        printf("Es fin de semana!");
    }
    else{
        printf("Tengo que trabajar hoy..");
    }

    return 0;
}