/* INF112 - PROGRAMAÇÃO II
   Prática 10 - Recursividade
   Exercício 1 - Soma
   Laís Reis de Sales - 96862
   21 de novembro de 2023
*/

#include <iostream>
#include <stdexcept>
#include "soma.hpp"

int main(){
    std::cout << "Calcule a soma entre dois números!\n";
    std::cout << "Instruções:\n";
    std::cout << "Digite dois números, sendo que o primeiro DEVE ser menor que o segundo.\n";
    int m, n;
    std::string numero1, numero2;

    while (true){
        while(true){
            std::cout << "Digite o menor número: ";
            std::cin >> numero1;
            std::cout << "Digite o maior número: ";
            std::cin >> numero2;

            try{    
                m = stoi(numero1);
                n = stoi(numero2);
                break;
            } catch (std::invalid_argument &e){
                std::cerr << "Erro: digite um número inteiro. \n";
            }
        }
        try {
            Soma soma(m,n);
            std::cout << "O resultado é: " << soma.calcula_soma(soma.get_m()) << std::endl;
            break;
        } catch(std::invalid_argument &e){
            std::cout << "Erro: " << e.what() << std::endl;
        }
    }
    return 0;
}