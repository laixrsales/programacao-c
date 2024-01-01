#ifndef INF112_PACKAGE_H
#define INF112_PACKAGE_H

#include <string>

class Package{
    private:
    std::string _nome;
    std::string _endereco;
    unsigned int _peso;
    unsigned int _custo;

    public:
    Package(std::string nome, std::string endereco, unsigned int peso, unsigned int custo);
    virtual double calculateCost();
};

#endif
