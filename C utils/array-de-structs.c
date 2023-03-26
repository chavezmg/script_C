#include <stdio.h>
#include <string.h>

struct Student{
    char name[12];
    float gpa;
};

int main(){
    
    struct Student estudiante1 = {"Matias", 3.0};
    struct Student estudiante2 = {"Yanina", 7.0};
    struct Student estudiante3 = {"Pablo", 4.3};
    struct Student estudiante4 = {"Zamba", 5.2};

    //declaro arreglo de estudiantes
    struct Student estudiantes[] = {estudiante1, estudiante2, estudiante3, estudiante4};

    for(int i=0; i<sizeof(estudiantes)/sizeof(estudiantes[0]); i++){
        printf("Nombre: %-12s \t", estudiantes[i].name); //-:left justified, 12: cantidad de caracteres a mostrar
        printf("GPA: %.2f\n", estudiantes[i].gpa);
    }

    return 0;
}