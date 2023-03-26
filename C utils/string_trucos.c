#include <stdio.h>
#include <string.h>

int main(){
    char string1[] = "Matias";
    char string2[] = "Chavez";

    strlwr(string1);
    strupr(string1);
    strcat(string1, string2);
    strncat(string1, string2, 2); //solo junta los 2 primeros caracteres
    strcpy(string1, string2);
    strncpy(string1, string2, 2); //solo copia los 2 primeros caracteres

    strset(string1, '?'); // convierte todo en ?
    strnset(string1, '?', 2); // convierte hasta 2 en ?
    strrev(string1); //invierte cadena
    int caracteres = strlen(string1);   //longitud cadena
    int comparacion = strcmp(string1, string1);        //comparacion cadenas - 0 si son iguales
    int comparacion2 = strncmp(string1, string1, 2); //compara los 2 primeros caracter
    int comparacion3 = strcmpi(string1, string1); //compara todo e ignora mayusculas minusculas
    int comparacion4 = strnicmp(string1, string1, 2); //lo mismo de arriba pero compara los 2 primeros
    
    printf("%s", string1);
    printf("%d", caracteres);
    printf("\nComparacion: %d", comparacion);

    return 0;
}