/* INF 112 - Programação II
   Prática 3 - Tipos Abstratos de Dados (TADs)
   Exercício 1 - Alunos
   Laís Reis de Sales - 96862
   07/09/2023
*/

#include <iostream>
#include "alunos.h"

int main () {
    int disciplinas;

    Aluno a1 = Aluno();
    std::cout << "Digite o total de disciplinas: ";
    std::cin >> disciplinas;
    a1.adicionarNota(disciplinas);
    a1._mediaNotas = a1.calcularMediaAluno(a1._notas, disciplinas);
    a1.imprimeInformacoesAluno(disciplinas);
    a1.apagaHeap();

    return 0;
}
