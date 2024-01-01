/* INF112 - PROGRAMAÇÃO II
   Prática 9 - Tratamento de Exceções e Arquivos
   Exercício 2 - Vetor
   Laís Reis de Sales - 96862
   14 de novembro de 2023
*/

#include <iostream>
#include "posicoesVetor.hpp"
#include <string>

int main() {
    std::string tamanho;
    int y = 0;
    while (true) {
        try{
            std::cout << "Digite o tamanho do vetor: " << std::endl;
            std::cin >> tamanho;
            y = stoi(tamanho);
            break;
        } catch (std::invalid_argument &e){
            std::cerr << "Erro: Digite um número.\n";
        }

    }

    PosicoesVetor v(y);
    try {
        v.preencherValores();
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    v.imprimeVetor();

    return 0;
}
