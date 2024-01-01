/* INF112 - PROGRAMAÇÃO II
   Prática 10 - Recursividade
   Exercício 2 - Potência
   Feito por laixrsales
   21 de novembro de 2023
*/

#include <iostream>
#include <stdexcept>
#include <string>

int calcula_potencia(int base, int expoente) {
    if (base >= 0 && expoente >=0){
        if (expoente == 0){
            return 1;
        } else {
            return base * calcula_potencia(base, expoente-1);
        }
    } else {
        throw std::invalid_argument("Os números devem ser positivos!");
    }
}

int main(){
    std::cout << "Calcule o valor de um número elevado a outro!\n";
    std::cout << "Instruções:\n";
    std::cout << "Os dois número devem ser número inteiros positivos!\n";
    int base, expoente;
    std::string numero1, numero2;

    while (true){
        while(true){
            std::cout << "Digite o número da base: ";
            std::cin >> numero1;
            std::cout << "Digite o número do expoente: ";
            std::cin >> numero2;

            try{    
                base = stoi(numero1);
                expoente = stoi(numero2);
                break;
            } catch (std::invalid_argument &e){
                std::cerr << "Erro: digite um número inteiro. \n";
            }
        }
        try {
            std::cout << "O resultado é: " << calcula_potencia(base,expoente) << std::endl;
            break;
        } catch (std::invalid_argument &e) {
            std::cout << "Erro: " << e.what() << std::endl;
        }
    }
    return 0;
}