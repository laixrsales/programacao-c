#ifndef GASTOS_H_
#define GASTOS_H_
#include <fstream>
#include <string>
#include <vector>

class Gastos {
    private:
        std::ifstream _entrada;
        std::ofstream _saida;
        std::vector<double> _gastosIndividuais;
        std::vector<std::string> _nomes;
        std::vector<double> _percentuais;
        double _gastoMedio;
        double _totalGastos;
        int _maior;
    public:
        Gastos(std::string entrada, std::string saida);
        ~Gastos();
        void leValores();
        void analisaValores();
        void escreveValores();

};

#endif