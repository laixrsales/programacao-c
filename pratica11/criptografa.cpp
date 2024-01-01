#include <string>
#include <iostream>
#include "criptografa.hpp"

int Criptografa::operator()(std::string binario){
    std::string criptografado;
    std::cout << binario;
    for (char digito:binario){
        if (digito == '1'){
            digito = '0';
        } else if(digito == '0') {
            digito = '1';
        }
        criptografado += digito;
    }

    return stoi(criptografado);
}