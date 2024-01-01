#define TAMANHO 100

struct ListaVetorInteiros {
    //Dados
    int *_elementos;
    int _numElementosInseridos;
    int _inicio = 0;

    //Construtor
    ListaVetorInteiros();
    //Destrutor
    ~ListaVetorInteiros();
    //Insere um inteiro na lista
    void inserirElemento(int elemento);
    //Imprime a lista
    void imprimir();
    //Remove o último elemento
    void removerUltimo();
    //Remove o primeiro elemento
    void removerPrimeiro();
    //Inverte a ordem da lista
    void inverte();
};
