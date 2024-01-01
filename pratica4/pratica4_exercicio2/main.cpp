/* INF112 - Programação II
   Prática 4 - Tipo Abstrato de Dados (TADs) / Modularização
   Exercício 2 - Cubo
   Feito por laixrsales
   12 de setembro de 2023
*/
#include <iostream>
#include "cubo.h"

int main() {
    float area, volume;
    Cubo *cubo = new Cubo(3.0);
    area = cubo->calculaAreaCubo();
    volume = cubo->calculaVolumeCubo();
    std::cout << "Área: " << area << std::endl;
    std::cout << "Volume: " << volume << std::endl;
    delete cubo;
    return 0;
}