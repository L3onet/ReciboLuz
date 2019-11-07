//
// Created by Leonel Gonzalez Vidales on 23/10/19.
//

#ifndef PROYECTO_RECIBOLUZ_H
#define PROYECTO_RECIBOLUZ_H

class ReciboLuz {

    // Declarar métodos de tipo público (public)
public:
    int calcularConsumo(int lecturaAnterior, int lecturaActual);
    float calcularCostoConsumo(int costoKw, int consumoPeriodo);
    float calcularTotalPeriodo(float costoConsumo, int consumoPeriodo);

    // Declarar atributos de tipo privado (private)
private:
    float costokw = 0;          // Se declara el costo del kilowatt
    int lecturaanterior = 0;    // Se declara la lectura del último consumo
    int lecturaactual = 0;      // Se declara el consumo actual
    int consumokw = 0;          // Se declara el consumo del periodo
    float totalapagar = 0;      // Se declara el total a pagar del recibo de luz
};

#endif //PROYECTO_RECIBOLUZ_H