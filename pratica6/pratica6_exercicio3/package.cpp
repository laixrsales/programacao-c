#include "package.h"

Package::Package(std::string nome, std::string endereco, unsigned int peso, unsigned int custo)
: _nome(nome), _endereco(endereco), _peso(peso), _custo(custo) {};

double Package::calculateCost(){
    return _peso * _custo;
}

