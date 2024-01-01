#include <iostream>
#include "matrizQuadrada.h"

MatrizQuadrada::MatrizQuadrada(int n){
    if (n > 0){       // garante que não será criada uma matriz de ordem inválida
        this->ordem = n;    // guarda o valor para uso em outros métodos
        this->matrizPtr = new int *[this->ordem];    //cria um array ponteiro de ponteiro

        if (this->matrizPtr != nullptr){     //verifica se a memória foi alocada corretamente
            for (int i = 0; i < this->ordem; i++){  //percorre o array
                this->matrizPtr[i] = new int[this->ordem];  //termina de alocar a matriz
            }
        } else { //mensagem de erro
            std::cerr << "Falha ao alocar memória para a matriz.\n";
        }
    } else { //mensagem de erro
        std::cerr << "A ordem de uma matriz deve ser um número inteiro maior que zero.\n";
    }
}

MatrizQuadrada::~MatrizQuadrada(){
    for (int i = 0; i < this->ordem; i++){  // primeiro deleta a memória alocada pelos ponteiros
        delete[] this->matrizPtr[i];
    }

    delete[] this->matrizPtr;   // depois deleta a memória alocada pelos ponteiros de ponteiro
}

void MatrizQuadrada::leMatriz(){
    std::cout << "Entre com uma matriz de ordem " << this->ordem << ":\n"; // para dar clareza ao usuário
    for (int i = 0; i < this->ordem; i++){        //percorre a matriz alocando cada elemento
        for (int j = 0; j < this->ordem; j++){
            std::cin >> this->matrizPtr[i][j];
        }
    }
}
                                  //as matrizes são passadas por referência para não ser uma cópia
void MatrizQuadrada::soma(MatrizQuadrada *segundaMatriz, MatrizQuadrada *resultado){
    if(this == nullptr || segundaMatriz == nullptr || resultado == nullptr){  // antes de fazer a operação
        std::cerr << "Um dos ponteiros de matriz é nulo.\n";  // verifica se um dos ponteiros não é nulo
        return;
    }
    if (this->ordem == segundaMatriz->ordem && segundaMatriz->ordem == resultado->ordem){  //verifica se as duas tem a mesma ordem
        for (int i = 0; i < this->ordem; i++){      //percorre a matriz
            for (int j = 0; j < this->ordem; j++){
                resultado->matrizPtr[i][j] = this->matrizPtr[i][j] + segundaMatriz->matrizPtr[i][j];
            }    //soma cada elemento e guarda na matriz resultado
        }
    } else {    //mensagem de erro
        std::cerr << "Para somar, as matrizes devem ser de mesma ordem.\n";
    }
}
                                  //as matrizes são passadas por referência para não ser uma cópia
void MatrizQuadrada::subtrai(MatrizQuadrada *segundaMatriz, MatrizQuadrada *resultado){
    if(this == nullptr || segundaMatriz == nullptr || resultado == nullptr){ // antes de fazer a operação
        std::cerr << "Um dos ponteiros de matriz é nulo.\n"; // verifica se um dos ponteiros não é nulo
        return;
    }

    if(this->ordem == segundaMatriz->ordem && segundaMatriz->ordem == resultado->ordem){ //verifica se as duas tem a mesma ordem
        for (int i = 0; i < this->ordem; i++){  //percorre a matriz
            for (int j = 0; j < this->ordem; j++){
                resultado->matrizPtr[i][j] = this->matrizPtr[i][j] - segundaMatriz->matrizPtr[i][j];
            }     //subtrai cada elemento e guarda na matriz resultado
        }
    } else { //mensagem de erro
        std::cerr << "Para subtrair, as matrizes devem ser de mesma ordem.\n";
    }
}
                                  //as matrizes são passadas por referência para não ser uma cópia
void MatrizQuadrada::produto(MatrizQuadrada *segundaMatriz, MatrizQuadrada *resultado){
    if(this == nullptr || segundaMatriz == nullptr || resultado == nullptr){ // antes de fazer a operação
        std::cerr << "Um dos ponteiros de matriz é nulo.\n";  // verifica se um dos ponteiros não é nulo
        return;
    }

    if (this->ordem == segundaMatriz->ordem && segundaMatriz->ordem == resultado->ordem){ //verifica se tem a mesma ordem
        for (int i = 0; i < this->ordem; i++){
            for (int j = 0; j < this->ordem; j++){
                resultado->matrizPtr[i][j] = 0; //começa zerando o elemento da matriz resultado
                    //um novo for para fazer a multiplicação de linha por coluna
                for (int k = 0; k < this->ordem; k++){
                    resultado->matrizPtr[i][j] += this->matrizPtr[i][k] * segundaMatriz->matrizPtr[k][j];
                    //o elemento [i][j] do resultado recebe a soma de todas as multiplicações
                    //dos elementos das linhas da matriz 1 pelos elementos das colunas da matriz 2
                }
            }
        }
    } else { //mensagem de erro
        std::cerr << "Para multiplicar matrizes quadradas, elas devem ser de mesma ordem.\n";
    }
}
                                  //a matriz é passada por referência para não ser uma cópia
void MatrizQuadrada::criaMatrizIdentidade(MatrizQuadrada *identidade){
    if(this == nullptr || identidade == nullptr){ // antes de fazer a operação
        std::cerr << "Um dos ponteiros de matriz é nulo.\n"; // verifica se um dos ponteiros não é nulo
        return;
    }
    
    if(this->ordem == identidade->ordem){ //verifica se as duas tem a mesma ordem
        for (int i = 0; i < this->ordem; i++){
            for (int j = 0; j < this->ordem; j++){
                if (i == j){  // se o elemento pertence à diagonal principal da matriz
                    identidade->matrizPtr[i][j] = 1;  //ele recebe o valor 1
                } else {
                    identidade->matrizPtr[i][j] = 0;  //todos os outros elementos recebem 0
                }
            }
        }
    } else { //mensagem de erro
        std::cerr << "As matrizes tem ordens diferentes.\n";
    }
}
                                  //a matriz é passada por referência para não ser uma cópia
void MatrizQuadrada::criaTransposta(MatrizQuadrada *transposta){
    if(this == nullptr || transposta == nullptr){  // antes de fazer a operação
        std::cerr << "Um dos ponteiros de matriz é nulo.\n"; // verifica se um dos ponteiros não é nulo
        return;
    }

    if (this->ordem == transposta->ordem) { //verifica se as duas tem a mesma ordem
        for (int i = 0; i < this->ordem; i++){
            for (int j = 0; j < this->ordem; j++){
                transposta->matrizPtr[j][i] = this->matrizPtr[i][j]; //pega as linhas da matriz e coloca nas
            }                                              //colunas da matriz transposta
        }
    } else { //mensagem de erro
        std::cerr << "As matrizes tem ordens diferentes.\n";
    }
}
                                  //a matriz é passada por referência para não ser uma cópia
bool MatrizQuadrada::compara(MatrizQuadrada *segundaMatriz){
    if (this->ordem == segundaMatriz->ordem){ //verifica se as duas tem a mesma ordem
        for (int i = 0; i < this->ordem; i++){
            for (int j = 0; j < this->ordem; j++){
                if (this->matrizPtr[i][j] != segundaMatriz->matrizPtr[i][j]){
                    return false;  // se algum elemento for diferente, retorna falso
                }
            }
        }
    } else { // se não tiver a mesma ordem, já retorna falso
        return false;
    }
    return true; // só vai retornar true, se todos os elementos não retornarem falso em algum momento
}

void MatrizQuadrada::imprimeMatriz(){
    for (int i = 0; i < this->ordem; i++){   // percorre a matriz
        for (int j = 0; j < this->ordem; j++){
            std::cout << matrizPtr[i][j] << ' '; //imprime cada elemento da linha com um espaço depois dele
        }
        std::cout << std::endl; //pula a linha para imprimir a próxima
    }
}
