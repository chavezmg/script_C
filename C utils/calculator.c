#include <stdio.h>

int main(){

    char operator;
    double num1;
    double num2;
    double result;

    printf("\nEnter an operator (+ - * /): ");
    scanf("%c", &operator);

    printf("Enter number 1: ");
    scanf("%lf", &num1);

    printf("Enter number 2: ");
    scanf("%lf", &num2);

    switch(operator){
        case '+':
            result = num1 + num2;
            printf("\nThe result is: %lf", result);
            break;
        case '-':
            result = num1 - num2;
            printf("\nThe result is: %lf", result);
            break;
        case '*':
            result = num1 * num2;
            printf("\nThe result is: %lf", result);
            break;
        case '/':
            if (num2 == 0){
                printf("\ncan't divide by 0");
                break;
            }
            result = num1 / num2;
            printf("\nThe result is: %.10lf", result);
            break;
    }

    return 0;
}