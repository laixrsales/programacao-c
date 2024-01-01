#ifndef POSICOES_VETOR_H_
#define POSICOES_VETOR_H_

class PosicoesVetor {
    private:
        int _tamanho;
        int *_vetor;
    public:
        PosicoesVetor(int tamanho);
        ~PosicoesVetor();
        void preencherValores();
        void imprimeVetor();
};

#endif
