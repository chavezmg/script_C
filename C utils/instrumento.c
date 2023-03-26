#include <stdio.h>

int i = 0;

//prototipos de funciones
int *readDigital(int[]);    
int *readAnalog(int[]);
void manageOutputs(int[]);

int main(){

    //HAL_Init();

    //array donde se almacenan las lecturas digitales
    int digitalInputs[8] = {0,0,0,0,0,0,0,0};
    int *digitalInputsp;
    //array donde se almacenan las lecturas analogicas
    int analogInputs[4] = {0, 0, 0, 0};
    int *analogInputsp;
    //array formateado para enviar datos a QT
    int final[11] = {0};

    //declaramos variables e iniciamos los pines ADC
    /*uint32_t adc_vals[4];   
    HAL_ADC_Start_DMA(&hadc1, adc_vals, 4);
    */

    //array proveniente de QT para encender o apagar salidas
    int mensaje[] = {1,0,0,1,0,1,1,0};
    digitalInputsp = readDigital(digitalInputs);
    analogInputsp = readAnalog(analogInputs);
    if (mensaje!=0) {
        manageOutputs(mensaje);
    }


    //preparar array para enviar
    for (i=0;i<8;i++){
        //printf("%d", digitalInputsp[i]);
        final[i] = digitalInputsp[i];
        final[i] = digitalInputsp[i];
    }
    for (i=0;i<4;i++){
        //printf("%d, ", analogInputsp[i]);
        final[i+8] = analogInputsp[i];
    }

    printf("\n Array a enviar: ");
    for (i=0;i<12;i++){
        if(i!=11){
            printf("%d, ", final[i]);}
        else{
            printf("%d", final[i]);}
    }

    return 0;
}


//cuerpo de funciones
/*int *readDigital(int digitalInputs[]){
    digitalInputs[1] = HAL_GPIO_ReadPin (GPIOA, GPIO_PIN_1);
    digitalInputs[2] = HAL_GPIO_ReadPin (GPIOA, GPIO_PIN_2);
    digitalInputs[3] = HAL_GPIO_ReadPin (GPIOA, GPIO_PIN_3);
    digitalInputs[4] = HAL_GPIO_ReadPin (GPIOA, GPIO_PIN_4);
    digitalInputs[5] = HAL_GPIO_ReadPin (GPIOA, GPIO_PIN_5);
    digitalInputs[6] = HAL_GPIO_ReadPin (GPIOA, GPIO_PIN_6);
    digitalInputs[7] = HAL_GPIO_ReadPin (GPIOA, GPIO_PIN_7);
    digitalInputs[8] = HAL_GPIO_ReadPin (GPIOA, GPIO_PIN_8);
    return digitalInputs;
}

float *readAnalog(float analogInputs[]){
    HAL_ADC_PollForConversion(&hadc1,1000);
    analogInputs[1] = HAL_ADC_GetValue(&hadc1); o adc_vals[1]   
    HAL_ADC_PollForConversion(&hadc2,1000);
    analogInputs[2] = HAL_ADC_GetValue(&hadc2);
    HAL_ADC_PollForConversion(&hadc3,1000);
    analogInputs[3] = HAL_ADC_GetValue(&hadc3);
    HAL_ADC_PollForConversion(&hadc4,1000);
    analogInputs[4] = HAL_ADC_GetValue(&hadc4);

    return analogInputs;
}

void manageOutputs(int mensaje[]){
    (mensaje[0] == 1) ? HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_SET) : HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_RESET);
    (mensaje[1] == 1) ? HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, GPIO_PIN_SET) : HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, GPIO_PIN_RESET);
    (mensaje[2] == 1) ? HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, GPIO_PIN_SET) : HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, GPIO_PIN_RESET);
    (mensaje[3] == 1) ? HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, GPIO_PIN_SET) : HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, GPIO_PIN_RESET);
    (mensaje[0] == 1) ? HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, GPIO_PIN_SET) : HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, GPIO_PIN_RESET);
    (mensaje[1] == 1) ? HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, GPIO_PIN_SET) : HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, GPIO_PIN_RESET);
    (mensaje[2] == 1) ? HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, GPIO_PIN_SET) : HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, GPIO_PIN_RESET);
    (mensaje[3] == 1) ? HAL_GPIO_WritePin(GPIOB, GPIO_PIN_16, GPIO_PIN_SET) : HAL_GPIO_WritePin(GPIOB, GPIO_PIN_16, GPIO_PIN_RESET);
}

*/

int *readDigital(int digitalInputs[]){
    digitalInputs[0] = 1;
    digitalInputs[1] = 1;
    digitalInputs[2] = 1;
    digitalInputs[3] = 0;
    digitalInputs[4] = 1;
    digitalInputs[5] = 0;
    digitalInputs[6] = 1;
    digitalInputs[7] = 0;
    return digitalInputs;
}

int *readAnalog(int analogInputs[]){
    analogInputs[0] = 124;
    analogInputs[1] = 520;
    analogInputs[2] = 1000;
    analogInputs[3] = 87;

    return analogInputs;
}

void manageOutputs(int mensaje[]){
    (mensaje[0] == 1) ? printf("Salida 1 ON ") : printf("Salida 1 OFF ");
    (mensaje[1] == 1) ? printf("Salida 2 ON ") : printf("Salida 2 OFF ");
    (mensaje[2] == 1) ? printf("Salida 3 ON ") : printf("Salida 3 OFF ");
    (mensaje[3] == 1) ? printf("Salida 4 ON ") : printf("Salida 4 OFF ");
    (mensaje[4] == 1) ? printf("Salida 5 ON ") : printf("Salida 5 OFF ");
    (mensaje[5] == 1) ? printf("Salida 6 ON ") : printf("Salida 6 OFF ");
    (mensaje[6] == 1) ? printf("Salida 7 ON ") : printf("Salida 7 OFF ");
    (mensaje[7] == 1) ? printf("Salida 8 ON ") : printf("Salida 8 OFF ");
}