#include <stdio.h>

int main(){
    //array 2d

    int numbers[3][3] = {
                        {1,2,3},
                        {4,5,6},
                        {7,8,9}
                        }; //es obligatorio poner el tamaño de la
                           //segunda dimension
    
    int numbers2[2][3]; //otra forma de declarar los valores 1 a 1
    numbers2[0][0] = 1;
    numbers2[0][1] = 2;
    numbers2[0][2] = 3;
    numbers2[1][0] = 4;
    numbers2[1][1] = 5;
    numbers2[1][2] = 6;


    //imprimimos array numbers
    int rows = sizeof(numbers)/sizeof(numbers[0]);
    int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);

    for(int i=0; i<rows; i++){     //filas
        for(int j=0; j<columns; j++){ //columnas
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //imprimimos array numbers2
    for(int i=0; i<2; i++){     //filas
        for(int j=0; j<3; j++){ //columnas
            printf("%d ", numbers2[i][j]);
        }
        printf("\n");
    }

    return 0;
}