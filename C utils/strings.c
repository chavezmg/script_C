#include <stdio.h>
#include <ctype.h>

int main(){

    char unit;
    float temp;

    printf("\n Is the temperature in F or C?: ");
    scanf("%c", &unit);

    unit = toupper(unit);
    

    if (unit == 'C'){
        printf("\n Enter the temp in celcius: ");
        scanf("%f", &temp);
        temp = (temp * 9 /5) +32;
        printf("\n The temp in farenheit is: %.1f", temp);
    }
    else if (unit == 'F'){
        printf("\n The temp is in farenheit: ");
        scanf("%f", &temp);
        temp = (temp -32) * 5/9;
        printf("\n The temp in celcius is: %.1f", temp);
    }
    else{
        printf("\n insert a valid option");
    }

    return 0;

}