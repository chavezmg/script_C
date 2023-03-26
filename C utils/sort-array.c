#include <stdio.h>

void sort(int array[], int size){

    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-1; j++){
            if(array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

void printarray(int array[], int size){

    for(int i=0; i<size; i++){
        printf("%d ", i);
    }

}

int main(){

    int array[] = {7,4,8,1,9,2,15,29,10,2,1};
    char array2[] = {'b', 'a', 'c', 'f', 'g', 'a', 'h'}; //tambien se puede ordenar letras si se acomoda el programa un poco
    int size = sizeof(array)/sizeof(array[0]);

    sort(array, size);
    printarray(array, size);

}