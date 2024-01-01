#include <iostream>
#include "cubo.h"

Cubo::Cubo(float aresta) {
    _aresta = aresta;
}

Cubo::~Cubo() {
    std::cout << "Deletado.\n";
}

float Cubo::calculaAreaCubo() {
    return (6 * _aresta * _aresta);
}

float Cubo::calculaVolumeCubo() {
    return (_aresta* _aresta * _aresta);
}
