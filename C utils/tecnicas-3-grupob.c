#include <stdio.h>

union un{
    char datoc[4];
    float datof;
}unionVar;

int main(){
    float datos[7] = {1.21, 1.35, 1.42, 2.22, 6.32, 7.22, 8.42};
    FILE *f;
    f = fopen("datos.txt", "r");

    int i;
    char ch;

    while((ch = fgetc(f)) != EOF){
        unionVar.datoc[i] = ch;
        i++;
        if(i == 4){
            printf("%f ", unionVar.datof);
            i=0;
        }
    }

}