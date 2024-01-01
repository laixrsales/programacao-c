/* INF112 - PROGRAMAÇÃO II
   Prática 9 - Tratamento de Exceções e Arquivos
   Exercício 3 - IPs
   Laís Reis de Sales - 96862
   17 de novembro de 2023
*/

#include <iostream>
#include <stdexcept>
#include <string>
#include "arquivoIP.hpp"

int main(){
    try {
        ArquivoIP teste("entrada.txt","ips.txt");
        teste.leIP();
        teste.escreveIP();
    } catch(std::ios_base::failure &e){
        std::cerr << e.what() << std::endl;
    }

    return 0;
}