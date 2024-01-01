/* Prática 1 - Ponteiros
   Exercício 3
   Feito por laixrsales */

#include <iostream>

int calculaTamanhoString1(char str[]){
    int tamanho = 0;
    for (int i = 0; str[i] != '\0'; i++){
        tamanho++;
    }
    return tamanho;
}

int calculaTamanhoString2(char str[]){
    int tamanho = 0;
    for (int i = 0; *(str + i) != '\0'; i++){
        tamanho++;
    }
    return tamanho;
}

int calculaTamanhoString3(char str[]){
    int tamanho = 0;
    for (char *ptr = str; *ptr ; ptr++){
        tamanho++;
    }
    return tamanho;
}

int main(){
    char str[51];
    std::cout << "Digite alguma string... (com até 50 caracteres): ";
    std::cin.getline(str, 50);
    std::cout << "Tamanhos calculados:" << std::endl;
    std::cout << calculaTamanhoString1(str) << ' ' << calculaTamanhoString2(str) << ' ' << calculaTamanhoString3(str);
    std::cout << std::endl;

    return 0;
}