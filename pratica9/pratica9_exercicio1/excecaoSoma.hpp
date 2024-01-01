#ifndef EXCECAO_SOMA_H_
#define EXCECAO_SOMA_H_
#include <string>

class ExcecaoSoma {
    private:
        int _valor;
        int *numeros;
    public:
        ExcecaoSoma();
        void imprimeValores(int valorTotal, int quantidade);
        void somaValores();
};

#endif