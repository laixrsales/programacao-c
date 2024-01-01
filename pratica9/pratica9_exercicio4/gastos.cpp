#include <fstream>
#include <string>
#include <iostream>
#include <iomanip>
#include "gastos.hpp"

Gastos::Gastos(std::string entrada, std::string saida){
    _entrada.open(entrada);
    _saida.open(saida);

    if(!_entrada.is_open()) {
        throw std::ios_base::failure("Erro: Não foi possível abrir o arquivo: " + entrada);
    }
    if(!_saida.is_open()) {
        throw std::ios_base::failure("Erro: Não foi possível abrir o arquivo: " + saida);
    }
}

Gastos::~Gastos(){
    try {
        _entrada.close();
        _saida.close();
    } catch (std::ios_base::failure &e) {
        std::cerr << "Erro: Falha ao fechar o arquivo." << std::endl;
    }
}

void Gastos::leValores() {
    std::string nome;
    double valor;

    while (!(_entrada.eof()) && _entrada >> nome) {
        _nomes.push_back(nome);

        _entrada.ignore(3, '$');

        if (!(_entrada >> valor)) {
            break;
        }

        _gastosIndividuais.push_back(valor);
    }
}

void Gastos::analisaValores(){
    double maior = 0;
    for (int i = 0; i < _gastosIndividuais.size(); i++){
        _totalGastos += _gastosIndividuais[i];

        if (_gastosIndividuais[i] > maior) {
            maior = _gastosIndividuais[i];
            _maior = i;
        }
    }

    for (int i = 0; i < _gastosIndividuais.size(); i++){
        _percentuais.push_back(_gastosIndividuais[i] * 100 / _totalGastos);
    }

    _gastoMedio = _totalGastos / _gastosIndividuais.size();
}

void Gastos::escreveValores(){
    _saida << "Nro. Funcionário Gasto %" << std::endl;

    for (int i = 0; i < _nomes.size(); i++){
        _saida << i + 1 << " " << _nomes[i] << " R$" << _gastosIndividuais[i] << " " << std::fixed << std::setprecision(2) <<_percentuais[i] << '%' << std::endl;
    }
    
    _saida << "Gasto mensal total: " << _totalGastos << std::endl;
    _saida << "Gasto médio por funcionário: " << _gastoMedio << std::endl;
    _saida << "Funcionário que mais gastou: " << _nomes[_maior];

}