/* INF112 - PROGRAMAÇÃO II
   Prática 5 - Classes, objetos e encapsulamento
   Exercício 3 - Aquecedor II
   Feito por laixrsales
   03 de outubro de 2023
*/

#include <iostream>
#include "aquecedor.h"

int main() {
   Aquecedor aq1;
   Aquecedor aq2(20);
   Aquecedor aq3(38, 1);

   //Temperatura de cada um dos aquecedores
   std::cout << aq1.get_temperatura() << std::endl;
   std::cout << aq2.get_temperatura() << std::endl;
   std::cout << aq3.get_temperatura() << std::endl;
   std::cout << "------------------------------------"<< std::endl;

   aq1.aquecer();
   aq2.aquecer();
   aq3.aquecer();

    //Temperatura de cada um dos aquecedores
   std::cout << aq1.get_temperatura() << std::endl;
   std::cout << aq2.get_temperatura() << std::endl;
   std::cout << aq3.get_temperatura() << std::endl;
   std::cout << "------------------------------------"<< std::endl;

   aq1.set_fatorIncremento(10);
   aq2.set_fatorIncremento(25);
   aq3.set_fatorIncremento(2);

   aq1.aquecer();
   aq2.esfriar();
   aq3.aquecer();

    //Temperatura de cada um dos aquecedores
   std::cout << aq1.get_temperatura() << std::endl;
   std::cout << aq2.get_temperatura() << std::endl;
   std::cout << aq3.get_temperatura() << std::endl;
   std::cout << "------------------------------------"<< std::endl;

    return 0;
}
