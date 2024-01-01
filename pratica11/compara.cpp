#include "compara.hpp"

bool Compara::operator()(Alunos *aluno1, Alunos *aluno2){
    return aluno1->get_media() > aluno2->get_media();
}