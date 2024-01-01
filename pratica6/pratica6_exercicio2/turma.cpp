#include "turma.h"

Turma::Turma(int codigo, int ano):_codigo(codigo), _ano(ano){};

int Turma::get_codigo(){
    return _codigo;
}

int Turma::get_ano(){
    return _ano;
}