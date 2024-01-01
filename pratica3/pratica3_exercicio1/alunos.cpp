#include <iostream>
#include <iomanip>
#include "alunos.h"

Aluno::Aluno () {
    std::cout << "Digite o nome do aluno: ";
    std::cin.getline(_nome, 51);
    std::cout << "Digite a matrícula do aluno: ";
    std::cin >> _matricula;
}

void Aluno::adicionarNota (int quant) {
    _notas = new double [quant];
    
    std::cout << "Digite as notas do aluno: ";
    for (int i = 0; i < quant; i++){
        std::cin >> *(_notas + i);
    }
}

double Aluno::calcularMediaAluno (double *ponteiro, int quant) {
    double soma = 0;

    for (int i = 0; i < quant; i++){
        soma += *(ponteiro + i);
    }
    return soma/quant;
}

void Aluno::imprimeInformacoesAluno (int quant) {
    std::cout << "Nome: " << _nome << std::endl;
    std::cout << "Matrícula: "<< _matricula << std::endl;
    std::cout << "Notas: ";
    for (int i = 0; i < quant; i++){
        std::cout << *(_notas+i) << ' ';
    }
    std::cout << std::endl;
    std::cout << "Média: " << std::fixed << std::setprecision(2) << _mediaNotas << std::endl;

}

void Aluno::apagaHeap () {
    delete[] _notas;
}
