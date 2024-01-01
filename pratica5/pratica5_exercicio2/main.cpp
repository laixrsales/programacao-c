/* INF112 - PROGRAMAÇÃO II
   Prática 5 - Classes, objetos e encapsulamento
   Exercício 2 - Aquecedor
   Feito por laixrsales
   03 de outubro de 2023
*/

#include <iostream>
#include "aquecedor.h"

int main() {
   Aquecedor aq1;
   std::cout << aq1.get_temperatura() << std::endl;

   aq1.aquecer();
   std::cout << aq1.get_temperatura() << std::endl;

   aq1.esfriar();
   aq1.esfriar();

   std::cout << aq1.get_temperatura() << std::endl;
    return 0;
}
