#include <iostream>
#include "listavetor.h"

ListaVetorInteiros::ListaVetorInteiros() {
    _elementos = new int[TAMANHO]();
    _numElementosInseridos = 0;
}

ListaVetorInteiros::~ListaVetorInteiros() {
    delete[] _elementos;
}

void ListaVetorInteiros::inserirElemento(int elemento) {
    if(_numElementosInseridos == TAMANHO) {
        std::cerr << "Erro, lista cheia." << std::endl;
        exit(1);
    }

    _elementos[_numElementosInseridos] = elemento;
    _numElementosInseridos++;
}

void ListaVetorInteiros::imprimir() {
    for (int i = _inicio; i < _numElementosInseridos; i++){
        std::cout << _elementos[i] << ' ';
    }
    std::cout << std::endl;
}

void ListaVetorInteiros::removerUltimo(){
    _numElementosInseridos--;
}

void ListaVetorInteiros::removerPrimeiro() {
    _inicio++;
}

void ListaVetorInteiros::inverte() {
    int *listaInvertida = new int[TAMANHO];

    for(int i = _inicio; i < _numElementosInseridos; i++){
        listaInvertida[_numElementosInseridos - i] = _elementos[i];
    }
    delete[] _elementos;
    _elementos = listaInvertida;
}
