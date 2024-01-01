struct Aluno {
    char _nome[51];
    int _matricula;
    double *_notas;
    double _mediaNotas = 0;

    Aluno ();

    void adicionarNota (int quant);
    double calcularMediaAluno (double *ponteiro, int quant);
    void imprimeInformacoesAluno(int quant);
    void apagaHeap();

};
