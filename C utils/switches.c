#include <stdio.h>

int main(){

    char grade;

    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        printf("\n You did perfect!");
        break;
    case 'B':
        printf("\n You did god!");
        break;
    case 'C':
        printf("\n You did okay!");
        break;
    case 'D':
        printf("\n At least is not an F!");
        break;
    case 'F':
        printf("\n YOU FAILED!");
        break;
    default:
        printf("Enter valid grades");
        break;
    }

    return 0;
}