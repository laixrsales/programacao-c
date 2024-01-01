#ifndef ALUNOS_HPP_
#define ALUNOS_HPP_
#include <string>
#include <utility>

class Alunos {
    private:
        int _matricula;
        std::string _nome;
        double _media;
    public:
        Alunos(int matricula, std::string nome, double nota1, double nota2);
        
        int get_matricula();
        std::string get_nome();
        double get_media();
};

#endif