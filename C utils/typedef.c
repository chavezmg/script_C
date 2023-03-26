#include <stdio.h>
#include <string.h>

typedef char user[25];

struct Name //struct normal
{
    char nombre[25];
    int edad;
};

typedef struct{//struct con typedef, el nombre va al final
    char nombre[25];
    int edad;
}Name2;



int main(){
    //typedef = palabra reservada que asigna un nick a un tipo de datos
    //tambien podemos usar typedef con structs, su sintaxis cambia levemente
    user user1 = "Matias";
    struct Name user2 = {"Yanina", 32}; //struct normal
    Name2 user3 = {"Gabriel", 29}; //struct con typedef, no hace falta el keyword struct


    return 0;
}