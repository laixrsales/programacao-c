/* INF112 - PROGRAMAÇÃO II
   Prática 9 - Tratamento de Exceções e Arquivos
   Exercício 4 - Funcionários
   Feito por laixrsales
   17 de novembro de 2023
*/

#include <fstream>
#include <string>
#include <stdexcept>
#include "gastos.hpp"

int main(){
    Gastos teste("funcionarios.txt", "valores.txt");
    teste.leValores();
    teste.analisaValores();
    teste.escreveValores();

    return 0;
}
