#include <string>
#include "converte.hpp"

std::string Converte::operator()(int decimal){
    if (decimal == 0){
        return "0";
    } else {
        std::string binario = operator()(decimal / 2);
        return binario + char('0' + decimal % 2);
    }

}

