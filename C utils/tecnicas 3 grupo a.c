#include <stdio.h>

union un{
    char datoc[4];
    float datof;
}unionVar;

int main(){
    float datos[] = {1.21, 1.35, 1.42, 2.22, 6.32, 7.22, 8.42};
    FILE *f;
    f = fopen("datos.txt", "w");

    unionVar.datof = 1.21;
    fprintf(f, "%c%c%c%c", unionVar.datoc[0], unionVar.datoc[1], unionVar.datoc[2], unionVar.datoc[3]);
    

}