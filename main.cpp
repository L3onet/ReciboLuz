#include <iostream>
#include "ReciboLuz.h"

using std::cout;
using std::endl;

int main(){
    int lecturaactual;
    int lecturaanterior;
    float costokw;
    int consumo;
    float costoConsumo;
    float totalPagar;
    ReciboLuz recibo;   // Instancia de ReciboLuz
    std::cout << "Introduce la lectura anterior: ";
    std::cin >> lecturaanterior;
    std::cout << "Introduce la lectura actual: ";
    std::cin >> lecturaactual;
    std::cout << "Introduce el costo del kilowatt: ";
    std::cin >> costokw;
    consumo = recibo.calcularConsumo(lecturaanterior, lecturaactual);
    std::cout << "El consumo es " << consumo << std::endl;
    costoConsumo = recibo.calcularCostoConsumo(costokw, consumo);
    std::cout << "El costo del consumo sin impuestos es " << costoConsumo << std::endl;
    totalPagar = recibo.calcularTotalPeriodo(costoConsumo, consumo);
    std::cout << "El total a pagar con impuestos es " << totalPagar << std::endl;
}
