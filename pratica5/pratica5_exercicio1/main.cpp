/* INF112 - PROGRAMAÇÃO II
   Prática 5 - Classes, objetos e encapsulamento
   Exercício 1 - Retângulo
   Feito por laixrsales
   03 de outubro de 2023
*/

#include <iostream>
#include "rectangle.h"

int main() {
    Rectangle r1, r2;

    std::cout << r1.get_length() << std::endl;
    std::cout << r2.get_length() << std::endl;

    r1.set_length(21);
    r1.set_width(-2);

    r2.set_length(15);
    r2.set_width(7);

    std::cout << r1.perimeter() << std::endl;
    std::cout << r2.area() << std::endl;

    return 0;
}
