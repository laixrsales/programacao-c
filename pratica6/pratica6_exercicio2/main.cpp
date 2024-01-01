/* INF 112 - PROGRAMAÇÃO II
   Prática 6 - Herança e Composição
   Exercício 2 - Turma
   Laís Reis de Sales - 96862
   17 de outubro de 2023
*/

#include <iostream>

#include "estudante.h"
#include "pessoa.h"
#include "turma.h"

void f(Pessoa &pessoa) {
  std::cout << "Na função: " << pessoa.defina_meu_tipo() << std::endl;
}

int main() {
  Pessoa pessoa("Julio Reis.");
  Turma t1 = Turma(101, 2023);
  Estudante estudante("Jane Doe", 20180101, t1);
  std::cout << "O códido da turma é: " << estudante.get_turma_codigo() << std::endl;
  std::cout << "O ano da turma é: " << estudante.get_turma_ano() << std::endl;
  std::cout << "A pessoa é: " << pessoa.defina_meu_tipo() << std::endl;
  std::cout << "O estudante é: " << estudante.defina_meu_tipo() << std::endl;
  f(pessoa);
  f(estudante);
  return 0;
}