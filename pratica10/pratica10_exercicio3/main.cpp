/* INF112 - PROGRAMAÇÃO II
   Prática 10 - Recursividade
   Exercício 3 - MDC
   Feito por laixrsales
   21 de novembro de 2023
*/

#include <iostream>
#include <stdexcept>
#include <string>
#include "mdc.hpp"

int main(){
     std::cout << "Calcule o MDC de dois números!\n";
    std::cout << "Instruções:\n";
    std::cout << "Digite dois números inteiros positivos. O primeiro número deve obrigatoriamente ser maior que o segundo.\n";
    int m, n;
    std::string numero1, numero2;

    while (true){
        while(true){
            std::cout << "Digite o maior número: ";
            std::cin >> numero1;
            std::cout << "Digite o menor número: ";
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
            MDC mdc(m,n);
            std::cout << "O resultado é: " << mdc.calcula_mdc(mdc.get_m(), mdc.get_n()) << std::endl;
            break;
        } catch(std::invalid_argument &e){
            std::cout << "Erro: " << e.what() << std::endl;
        }
    }
    return 0;
}