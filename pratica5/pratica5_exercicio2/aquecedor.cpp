#include <iostream>
#include "aquecedor.h"

Aquecedor::Aquecedor(){
    _temperatura = 20.00;
}

Aquecedor::~Aquecedor(){

}

double Aquecedor::get_temperatura(){
    return _temperatura;
}

void Aquecedor::aquecer(){
    _temperatura += 5.00;
}

void Aquecedor::esfriar(){
    _temperatura -= 5.00;
}
