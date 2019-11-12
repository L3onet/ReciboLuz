//
// Created by Leonel Gonzalez Vidales on 23/10/19.
//

#include <iostream>
#include "ReciboLuz.h"
using namespace std;
using std::cout;
using std::endl;

// Nombre de la clase
/*
 * En C++, las clases se escriben en diferentes archivos, un archivo por
 * cada clase definida en el diagrama de clases
*/

int ReciboLuz::calcularConsumo(int lecturaAnterior, int lecturaActual) {
    consumokw = lecturaActual - lecturaAnterior;
    if (consumokw == 0){
        consumokw = 10;
    }
    return consumokw;
}

float ReciboLuz::calcularCostoConsumo(float costoKw, int consumoPeriodo) {
    float costoConsumo = 0;
    costoConsumo = costoKw * consumoPeriodo;
    return costoConsumo;
}

float ReciboLuz::calcularTotalPeriodo(float costoConsumo, int consumoPeriodo) {
    if (consumoPeriodo < 500)
        totalapagar = costoConsumo * 1.22;
    if (consumoPeriodo >= 500 & consumoPeriodo < 900)
        totalapagar = costoConsumo * 1.18;
    if (consumoPeriodo >= 900)
        totalapagar = costoConsumo * 1.12;
    return totalapagar;
}

