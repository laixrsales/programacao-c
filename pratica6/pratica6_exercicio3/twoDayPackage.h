#ifndef INF112_TWODAYPACKAGE_H
#define INF112_TWODAYPACKAGE_H

#include "package.h"

class TwoDayPackage : public Package{
    private:
        double _taxaFixa;
    public:
    TwoDayPackage(std::string nome, std::string endereco, unsigned int peso, unsigned int custo, double taxa);
    double calculateCost() override;
};

#endif
