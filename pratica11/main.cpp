/* INF112 - PROGRAMAÇÃO II
   Prática 11 - STL, Métodos de ordenação
   Exercício 1
   Laís Reis de Sales - 96862
   28 de novembro de 2023
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "alunos.hpp"
#include "converte.hpp"
#include "criptografa.hpp"
#include "compara.hpp"


int main(){
    int matricula;
    std::string nome;
    double nota1, nota2;
    std::vector<Alunos*> alunos;
    Alunos *aluno;

    Converte converte_binario;
    Criptografa criptografa_binario;
    Compara compara_medias;

    std::cout << "Para sair, digite -1\n";
    while (true) {
        std::cout << "Digite a matrícula, o nome e as duas notas do aluno: ";
        std::cin >> matricula;
        if (matricula == -1){
            break;
        } else if (matricula < 0) {
            std::cerr << "A matrícula deve ser um número maior que zero. Tente novamente: ";
            std::cin >> matricula;
        }
        matricula = criptografa_binario(converte_binario(matricula));
        std::cin >> nome;
        std::cin >> nota1;
        if (nota1 < 0) {
            std::cerr << "As notas devem ser números positivos. Tente novamente: ";
            std::cin >> nota1;
        }

        std::cin >> nota2;
        if (nota2 < 0){
            std::cerr << "As notas devem ser números positivos. Tente novamente: ";
            std::cin >> nota2;
        }

        aluno = new Alunos(matricula, nome, nota1, nota2);
        alunos.push_back(aluno);
    }

    sort(alunos.begin(), alunos.end(), compara_medias);

    for(Alunos* aluno:alunos){
        std::cout << aluno->get_matricula() << " - " << aluno->get_nome() 
        << " - " << aluno->get_media() << std::endl;
    }

    for(Alunos* aluno:alunos){
        delete aluno;
    }

    return 0;
}
