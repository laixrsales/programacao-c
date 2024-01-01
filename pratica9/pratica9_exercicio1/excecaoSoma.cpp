#include <iostream>
#include <stdexcept>
#include "excecaoSoma.hpp"
#include "excecaoAcimaDeX.hpp"
#include <string>

ExcecaoSoma::ExcecaoSoma(){
    std::string input;
    while (true) {
        std::cout << "Digite o tamanho do vetor: ";
        std::cin >> input;
        try {
            _valor = stoi(input);
            break;
        } catch (std::invalid_argument &e){
            std::cerr << "Erro: Digite um número.\n";
        }
    }
    if (_valor <= 0) {
        throw std::invalid_argument("Erro: Digite apenas números positivos!");
    }


    numeros = new int[_valor];

    for (int i = 0; i < _valor; i++){
        std::cout << "Digite um número: ";
        std::cin >> input;
        try {
            numeros[i] = stoi(input);
            if (numeros[i] <= 0) {
                throw std::invalid_argument("Erro: Não é possível digitar números negativos.");
            } else if (numeros[i] > 100) {
                throw std::invalid_argument("Erro: Não é possível digitar números maiores que 100.");

            }
        } catch (std::invalid_argument &e){
            std::cerr << "Erro: Digite um número.\n";
            i--;
        }
    
    }
}

void ExcecaoSoma::imprimeValores(int valorTotal, int quantidade) {
    if (quantidade > 0) {
        std::cout << "Soma: " << valorTotal << std::endl;
        std::cout << "Total de valores: " << quantidade << std::endl;
        std::cout << "Média: " << valorTotal / quantidade << std::endl;
    } else {
        std::cerr << "Erro: Impossível calcular, valor inicial em desacordo com as regras.\n";
    }
}

void ExcecaoSoma::somaValores(){
    int somatorio = 0;
    int i = 0;
    while (i < _valor) {
        i++;
        somatorio += numeros[i-1];
        if (somatorio > _valor){
            somatorio -= numeros[i-1];
            i--;
            imprimeValores(somatorio, i);
            throw ExcecaoAcimaDeX();
            break;
        }
    }
    imprimeValores(somatorio, i);
}