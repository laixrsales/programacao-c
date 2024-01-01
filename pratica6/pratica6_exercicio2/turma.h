#ifndef INF112_TURMA_H
#define INF112_TURMA_H

class Turma {
    private:
        int _codigo;
        int _ano;
    public:
        //Construtor
        Turma(int codigo, int ano);
        int get_codigo();
        int get_ano();
};

#endif