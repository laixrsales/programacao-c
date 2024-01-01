/* Prática 1 - Ponteiros
   Exercício 5
   Laís Reis de Sales - 96862 */

#include <iostream>



int main(){
    char str[] = "abc teste";
    char *ptr = str;
    ptr += sizeof(str);

    for (;ptr != str-1; ptr--){
        std::cout << *ptr;
    }
    std::cout << std::endl;
    return 0;
}