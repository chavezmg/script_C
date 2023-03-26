#include <stdio.h>

int main(){

    FILE *pF = fopen("test.txt", "w"); //r:read, w:write, a:append
    //w sobrescribe, append escribe al ultimo

    fprintf(pF, "Sponge Bob square pants");
    fclose(pF);

    fopen("test.txt", "a"); 
    fprintf(pF, "\nPatrick Star");
    fclose(pF);

    //chequear si existe un archivo y borrarlo
    if (remove("test.txt") == 0){   //si devuelve 0 se eliminó
        printf("\nEl archivo se borró satisfactoriamente");
    }
    else{   
        printf("\nEl archivo NO se borró");
    }
    
    //para guardar en una ruta en particular se pone la ruta con doble barra invertida
    //cuando lo abrimos

    return 0;
}