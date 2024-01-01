/* INF112 - Programação II
   Prática 4 - Tipo Abstrato de Dados (TADs) / Modularização
   Exercício 1 - Lista
   Feito por laixrsales
   12 de setembro de 2023
*/
#include <iostream>
#include "listavetor.h"

int main() {
    ListaVetorInteiros l1;
    l1.inserirElemento(7);
    l1.inserirElemento(10);
    l1.inserirElemento(5);
    l1.inserirElemento(2);
    l1.inserirElemento(1);

    l1.imprimir();

    l1.removerUltimo();
    l1.imprimir();

    l1.removerPrimeiro();
    l1.imprimir();

    l1.inverte();
    l1.imprimir();
    return 0;
}
