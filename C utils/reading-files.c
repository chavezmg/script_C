#include <stdio.h>

int main(){

    //abrimos un archivo del escritorio 
    FILE *pF = fopen("C:\\Users\\Termi\\Desktop\\chupa pingos.txt", "r");
    char buffer[255];  //agregamos un buffer que contenga de a uno, las lineas del archivo

    if (pF == NULL){
        printf("El archivo no existe");
    }
    else{
        while(fgets(buffer, 255, pF) != NULL){
        fgets(buffer, 255, pF);
        printf("%s", buffer);
        }
    }



    fclose(pF);
    
    return 0;
}