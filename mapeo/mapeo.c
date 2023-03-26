/*
Script para mapear un numero desde un rango inicio a
un rango destino
*/

#include <stdio.h>
#include "mapeo.h"

int mapeo (int num_dato, int inicio_inferior, int inicio_superior, int destino_inferior, int destino_superior){
    int relacion;
    relacion = destino_superior - destino_inferior;
    relacion /= inicio_superior - inicio_inferior;

    return num_dato*relacion;
}
