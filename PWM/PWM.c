/*
Script para generar PWM, recibe dos parametros:
1) duty cycle: % del tiempo en alto de la salida
2) periodo: duracion de la señal deseada
*/

#include <stdio.h>
#include <time.h>
#include "PWM.h"

void pwm(float duty_cycle, float periodo){
    double timer = 0;  //cada este tiempo se ejecuta el codigo del if
    double ticks, t_sec, t_prev;
    float t_alto = periodo*duty_cycle;

    ticks = clock();
    t_sec = ticks/CLOCKS_PER_SEC;

    printf("%.2lf        %.2lf   ", t_sec, t_prev);
    if( (t_sec - t_prev) <= (t_alto)){
        printf("1\n");
        //acá escribir salida en ALTO del pin digital
    }   
    else if( (t_sec - t_prev) > (t_alto) && (t_sec - t_prev) < periodo){
        printf("0\n");
        //acá escribir salida en BAJO del pin digital
    }       
    else if((t_sec - t_prev) > periodo){
        t_prev = t_sec;
    }
}