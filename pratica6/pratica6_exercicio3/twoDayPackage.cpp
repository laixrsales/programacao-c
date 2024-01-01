#include "twoDayPackage.h"

TwoDayPackage::TwoDayPackage(std::string nome, std::string endereco, unsigned int peso, unsigned int custo, double taxa) 
: Package(nome, endereco, peso, custo), _taxaFixa(taxa){};

double TwoDayPackage::calculateCost(){
    return _taxaFixa + Package::calculateCost();
}

