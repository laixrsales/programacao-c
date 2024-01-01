#ifndef COMPARA_HPP_
#define COMPARA_HPP_
#include "alunos.hpp"

class Compara{
    public:
        bool operator()(Alunos *aluno1, Alunos *aluno2);
};

#endif