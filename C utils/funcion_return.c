#include <stdio.h>

double square(double x){
    return x*x;

}

int main(){

    double x = 6;
    double resultado = square(x);
    printf("Result: %lf", resultado);
    return 0;
}