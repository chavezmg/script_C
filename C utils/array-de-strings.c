#include <stdio.h>
#include <string.h>

int main(){

    char cars[][10] = {"Matias", "Yanina", "Pablo", "Salta"};

    strcpy(cars[0], "Jose"); //la unica forma de modificar un valor
                
    for(int i=0; i<sizeof(cars)/sizeof(cars[0]); i++){
        printf("%s\n", cars[i]);
    }

    return 0;
}