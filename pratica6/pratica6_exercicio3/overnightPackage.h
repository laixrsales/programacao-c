#ifndef INF112_OVERNIGHTPACKAGE_H
#define INF112_OVERNIGHTPACKAGE_H

#include "package.h"

class OvernightPackage : public Package{
    private:
        double _taxa;
    public:
        OvernightPackage(std::string nome, std::string endereco, unsigned int peso, unsigned int custo, double taxa);
        double calculateCost() override;
};

#endif
