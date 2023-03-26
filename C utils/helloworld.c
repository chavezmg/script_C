#include <stdio.h>

int main(){
    int x = 10;
    float y = 5.35;
    char c = 'c';
    char z[] = "HOLA CAPO";
    double pi = 3.141592562132321232232;
    printf("Hola!");
    printf(" %d, %f, %c, %s, %lf", x, y, c , z, pi);

    float item1 = 5.75122;
    float item2 = 10.00;
    float item3 = 100.99;
    int x1 = 5;
    int y1 = 2;
    float z1 = x1/(float)y1;
    printf("\n5/2 = %f\n", z1);

    printf("\nitem 1: $%-7.2f\n", item1);
    printf("item 2: $%7.f\n", item2);
    printf("item 2: $%7.f\n", item3);

    return 0;
}