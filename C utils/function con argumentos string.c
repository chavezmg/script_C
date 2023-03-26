#include <stdio.h>

void birthday(int age, char name[])
{
    printf("\n Happy birthday number %d, %s!", age, name);
}

int main(){
    
    char name[] = "Matias";
    int age = 29;
    birthday(age, name);


    return 0;
}