/* Prática 1 - Ponteiros
   Exercício 2
   Laís Reis de Sales - 96862 */

#include <iostream>

void leiaInteiros1(int &a, int &b){
    std::cin >> a >> b;
}

void leiaInteiros2(int *ptr1, int *ptr2){
    std::cin >> *ptr1 >> *ptr2;
}

int main(){
    int a, b;
    int *ptrA = &a;
    int *ptrB = &b;

    leiaInteiros1(a,b);
    std::cout << a << ' ' << b << std::endl;

    leiaInteiros2(ptrA, ptrB);
    std::cout << a << ' ' << b << std::endl;

    return 0;
}