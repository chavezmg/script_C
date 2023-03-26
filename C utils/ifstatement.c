#include <stdio.h>

int main(){

    int age;
    
    printf("\nEnter your age: ");
    scanf("%d", &age);

    if (age >= 18){
        printf("You're now signed up!");
    }
    else if (age<=0){
        printf("Insert a correct age!");
    }
    else{
        printf("You're underage!");
    }
    return 0;
}