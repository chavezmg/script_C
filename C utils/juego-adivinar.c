#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    const int MIN = 1;
    const int MAX = 100;
    int guess;
    int guesses;
    int answer;

    //generamos la semilla
    srand(time(0));

    //generamos un numero entre MIN y MAX
    answer = (rand() % MAX) + MIN;

    do{
        printf("Adivina el numero: ");
        scanf("%d", &guess);
        guesses++;
        if(guess > answer){
            printf("\nDemasiado alto!");
        }
        else if(guess < answer){
            printf("\nDemasiado bajo!");
        }
        else{
            printf("\n*************************************************");
            printf("\nCorrecto!, el numero es %d ", guess);
            printf("te tomo %d intentos", guesses);
        }
    }while(guess != answer);

    return 0;
}