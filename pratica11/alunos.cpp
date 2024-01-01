#include <string>
#include "alunos.hpp"

Alunos::Alunos(int matricula, std::string nome, double nota1, double nota2){
    _matricula = matricula;
    _nome = nome;
    _media = (nota1 + nota2) / 2;
}

int Alunos::get_matricula(){
    return _matricula;
}

std::string Alunos::get_nome(){
    return _nome;
}

double Alunos::get_media(){
    return _media;
}
