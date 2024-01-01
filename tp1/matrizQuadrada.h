class MatrizQuadrada {
    private:
    //Dados da matriz
        int ordem;
        int **matrizPtr;
    public:
    //Construtor
        MatrizQuadrada(int n);
    // Destrutor
        ~MatrizQuadrada();
    // Leitura dos dados
        void leMatriz();
    // Soma duas matrizes
        void soma(MatrizQuadrada *segundaMatriz, MatrizQuadrada *resultado);
    // Subtrai duas matrizes
        void subtrai(MatrizQuadrada *segundaMatriz, MatrizQuadrada *resultado);
    // Multiplica duas matrizes
        void produto(MatrizQuadrada *segundaMatriz, MatrizQuadrada *resultado);
    // Cria matriz identidade
        void criaMatrizIdentidade(MatrizQuadrada *identidade);
    // Cria matriz transposta
        void criaTransposta(MatrizQuadrada *transposta);
    // Compara duas matrizes
        bool compara(MatrizQuadrada *segundaMatriz);
    // Imprime uma matriz
        void imprimeMatriz();
};
