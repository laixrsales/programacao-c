#include <iostream>
#include "aquecedor.h"

Aquecedor::Aquecedor(){
    _temperatura = 20.00;
    _temperaturaMinima = 10.00;
    _temperaturaMaxima = 40.00;
    _fatorIncremento = 5.00;
}

Aquecedor::Aquecedor(double temperaturaInicial){
    _temperatura = temperaturaInicial;
    _temperaturaMinima = 10.00;
    _temperaturaMaxima = 40.00;
    _fatorIncremento = 5.00;
}

Aquecedor::Aquecedor(double temperaturaInicial, double fatorIncremento){
    _temperatura = temperaturaInicial;
    _temperaturaMinima = 10.00;
    _temperaturaMaxima = 40.00;
    _fatorIncremento = fatorIncremento;
}

Aquecedor::~Aquecedor(){

}

double Aquecedor::get_temperatura(){
    return _temperatura;
}

void Aquecedor::set_fatorIncremento(double fatorIncremento){
    _fatorIncremento = fatorIncremento;
}

void Aquecedor::aquecer(){
    if (_temperatura + _fatorIncremento <= _temperaturaMaxima){
        _temperatura += _fatorIncremento;
    } else {
        std::cerr << "Ação inválida. Temperatura máxima é 40." << std::endl;
    }
}

void Aquecedor::esfriar(){
    if (_temperatura - _fatorIncremento >= _temperaturaMinima){
        _temperatura -= _fatorIncremento;
    } else {
        std::cerr << "Ação inválida. Temperatura mínima é 10." << std::endl;
    }
}
