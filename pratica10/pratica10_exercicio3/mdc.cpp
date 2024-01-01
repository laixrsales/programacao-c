#include "mdc.hpp"
#include <stdexcept>

MDC::MDC(int m, int n){
    if(m > n && n >=0){
        _m = m;
        _n = n;
    } else {
        throw std::invalid_argument("Siga as instruções do programa!");
    }
}

int MDC::get_m(){
    return _m;
}

int MDC::get_n(){
    return _n;
}

int MDC::calcula_mdc(int numero1, int numero2){
    if (numero2 == 0){
        return numero1;
    } else {
        return calcula_mdc(numero2, numero1 % numero2);
    }
}