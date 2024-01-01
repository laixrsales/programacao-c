#include "overnightPackage.h"

OvernightPackage::OvernightPackage(std::string nome, std::string endereco, unsigned int peso, unsigned int custo, double taxa) 
: Package(nome, endereco, peso, custo), _taxa(taxa){};

double OvernightPackage::calculateCost(){
    return _taxa * Package::calculateCost();
}

