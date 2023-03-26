#include <stdio.h>
#include <ctype.h>

int main(){

    char preguntas[][100] = {"Cuantos habitantes tiene Argentina?",
                             "Cuantas provincias tiene Argentina?",
                             "Como se llama la capital de Argentina?"};

    char opciones[][100] = {"A)35M", "B)20M", "C)47M", "D)70M",
                            "A)27", "B)30", "C)20", "D)19",
                            "A)Ciudad Lindea", "B)Argentina", "C)La Plata", "D)CABA"};

    char respuestas[3] = {'C', 'A', 'D'};
    int numeroPreguntas = sizeof(preguntas)/sizeof(preguntas[0]);
    char guess;
    int score;
    char clear;

    printf("Juego de preguntas\n");

    for(int i = 0; i<numeroPreguntas; i++){
        printf("\n**********************************\n");
        printf("%s\n", preguntas[i]);
        printf("**********************************\n");
        for(int j=(i*4); j<(i*4)+4; j++){
            printf("%s\n", opciones[j]);
        }
        printf("Ingrese la letra de la opcion: ");
        scanf("%c", &guess);
        scanf("%c", &clear); //esto limpia \n del buffer de entrada

        guess = toupper(guess); //ponemos en mayuscula la seleccion del usuario
        if(guess == respuestas[i]){
            printf("\nCorrecto!");
            score++;
        }
        else{
            printf("\nIncorrecto!");
        }
    }
    printf("\nPuntaje final: %d/%d", score, numeroPreguntas);
    return 0;
}