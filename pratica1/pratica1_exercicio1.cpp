/* Prática 1 - Ponteiros
   Exercício 1
   Laís Reis de Sales - 96862 */

#include <iostream>

int main(){
    long int value1 = 200000;
    long int value2 = 0;
    long int *longPtr;

    longPtr = &value1;
    std::cout << *longPtr << std::endl;

    value2 = *longPtr;
    std::cout << value2 << std::endl;

    std::cout << &value1 << std::endl;
    std::cout << longPtr << std::endl;

    /*Sim, o endereço armazenado na variável longPtr é o mesmo endereço da variável value1, 
    porque longPtr é um ponteiro para long int apontando para value1*/

    return 0;
}