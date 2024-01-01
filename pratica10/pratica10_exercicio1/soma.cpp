#include "soma.hpp"
#include <stdexcept>

Soma::Soma(int m, int n){
    if(m <= n){
        _m = m;
        _n = n;
    } else {
        throw std::invalid_argument("O primeiro valor deve ser menor que o segundo!");
    }
}

int Soma::get_m(){
    return _m;
}

int Soma::calcula_soma(int numero){
    if (_n == numero){
        return _n;
    } else {
        return numero + calcula_soma(numero+1);
    }
}