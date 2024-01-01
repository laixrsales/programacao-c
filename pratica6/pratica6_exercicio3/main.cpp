/* INF112 - PROGRAMAÇÃO II
   Prática 6 - Herança e composição
   Exercício 3 - Custos de entrega
   Feito por laixrsales
   17 de outubro de 2023
*/

#include <iostream>

#include "package.h"
#include "twoDayPackage.h"
#include "overnightPackage.h"

int main(){
   Package package("Pacote 1", "Rua dos Passos, 71", 20, 15);
   TwoDayPackage two_day_package("Pacote 2", "Av. PH Rolphs, s/n", 5, 15, 10);
   OvernightPackage overnight_package("Pacote 3", "Av. Santa Rita, 110", 50, 15, 15);

   std::cout << "Custo do pacote: " << package.calculateCost() << std::endl;
   std::cout << "Custo do pacote dois dias: " << two_day_package.calculateCost() << std::endl;
   std::cout << "Custo do pacote noturno: " << overnight_package.calculateCost() << std::endl;

}