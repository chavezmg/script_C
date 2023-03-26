#include <stdio.h>

int main(){
    int rows, columns;
    char symbol;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &columns);
    scanf("%c"); //este scanf es para limpiar el buffer y sacar el \n de la entrada anterior

    printf("Enter a symbol: ");
    scanf("%c", &symbol);

    for(int i=0; i<rows ; i++){
        for(int j=0; j<columns ; j++){
            printf("%c ", symbol);
        }
        printf("\n");
    }

    return 0;
}