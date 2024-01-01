#include <iostream>
#include "posicoesVetor.hpp"
#include <string>
#include <stdexcept>

PosicoesVetor::PosicoesVetor(int tamanho){
    _tamanho = tamanho;
    _vetor = new int[_tamanho];
}

PosicoesVetor::~PosicoesVetor(){
    delete _vetor;
}

void PosicoesVetor::preencherValores(){
    std::cout << "Você deve informar " << _tamanho << 
    " números e as posições que deseja inserir no vetor. " << std::endl;
    int numero, posicaonumero;
    std::string posicao;

    for (int i = 0; i < _tamanho; i++){
        try {
            std::cin >> numero;
            std::cin >> posicao;
            posicaonumero = stoi(posicao);

            if (posicaonumero < 0 || posicaonumero >= _tamanho){
                throw std::out_of_range("Erro: Digite um número de 0 a " + std::to_string(_tamanho-1));
            }
            _vetor[posicaonumero] = numero;

        } catch (std::invalid_argument &e) {
            std::cerr << "Erro: digite um número inteiro.\n";
            i--;
        } catch (std::out_of_range &e) {
            std::cerr << e.what() << std::endl;
            i--;
        }
    }
}

void PosicoesVetor::imprimeVetor(){
    std::cout << "Vetor final:\n";
    for(int i = 0; i < _tamanho; i++){
        std::cout << _vetor[i] << ' ';
    }
    std::cout << std::endl;
}