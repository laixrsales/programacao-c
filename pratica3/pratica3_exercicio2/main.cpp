/* INF 112 - Programação II
   Prática 3 - Tipos Abstratos de Dados (TADs)
   Exercício 2 - Datas
   Laís Reis de Sales - 96862
   07/09/2023
*/

#include <iostream>
#include "data.h"

int main() {
    Data d1(7, 12, 2023);
    d1.exibirDataFormatoNumero();
    d1.exibirDataPorExtenso();
    d1.getDataEmSegundos();

    return 0;
}
