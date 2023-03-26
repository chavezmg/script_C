#include <stdio.h>
#include <string.h>


struct Player{
    char name[12];
    int score;
};


int main(){
    //struct: coleccion de variables relacionadas
    //          pueden ser de distintos tipos de datos
    //          se listan bajo un mismo nombre en memoria
    //          MUY MUY similares a clases en otros lenguajes pero sin metodos

    struct Player player1;      //muuuuuuuy igual a clases
    struct Player player2;

    strcpy(player1.name, "Matias"); //con el punto se acceden a las variables de cada "objeto"
    player1.score = 99;

    strcpy(player2.name, "Yanina");
    player2.score = 85;

    printf("nombre player 1: %s, score: %d\n", player1.name, player1.score);
    printf("nombre player 2: %s, score: %d\n", player2.name, player2.score);

    return 0;
}