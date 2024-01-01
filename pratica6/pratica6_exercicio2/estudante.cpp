#include "estudante.h"
#include "turma.h"

Estudante::Estudante(std::string nome, int matricula, Turma turma):
  Pessoa(nome), _matricula(matricula), _turma(turma) {};

int Estudante::get_matricula() const {
  return this->_matricula;
}

std::string Estudante::defina_meu_tipo() const {
  return "Sou um estudante";
}

int Estudante::get_turma_codigo(){
  return _turma.get_codigo();
}

int Estudante::get_turma_ano(){
  return _turma.get_ano();
}