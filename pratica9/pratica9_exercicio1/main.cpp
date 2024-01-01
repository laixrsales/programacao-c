/* INF112 - PROGRAMAÇÃO II 
   Prática 9 - Tratamento de Exceções e Arquivos
   Exercício 1 - Soma
   Laís Reis de Sales - 96862
   14 de novembro de 2023
*/

#include <iostream>
#include "excecaoSoma.hpp"
#include "excecaoAcimaDeX.hpp"

int main(){
    try {
        ExcecaoSoma es;
        try {
            es.somaValores();
        } catch (ExcecaoAcimaDeX &e){
            std::cerr << e.what() << std::endl;
        }
    } catch (std::invalid_argument &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}