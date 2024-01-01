/* INF112 - PROGRAMAÇÃO II
   Trabalho Prático I - Matrizes Quadradas
   Laís Reis de Sales - 96862
   13 de outubro de 2023
*/

#include <iostream>
#include "matrizQuadrada.h"

int main() {
    //Instancia as matrizes iniciais;
    MatrizQuadrada M1(3);
    MatrizQuadrada M2(2);
    MatrizQuadrada M3(3);
    MatrizQuadrada R(3);
    MatrizQuadrada I(3);
    MatrizQuadrada T(3);

    // Operações

    //coloca os elementos das 3 matrizes
    M1.leMatriz();
    M2.leMatriz();
    M3.leMatriz();

    M1.criaMatrizIdentidade(&I); //cria uma identidade de ordem 3
    M1.produto(&I, &R);  //R = M1 * I
    std::cout << "----------\n";
    if (M1.compara(&R)){   //verifica se M1 e o resultado da multiplicação de M1 por I são iguais
        std::cout << "Matrizes iguais!" << std::endl;
    } else {
        std::cout << "Matrizes diferentes!" << std::endl;
    }

    if (M1.compara(&M3)){  //verifica se M1 e M3 são iguais
        std::cout << "Matrizes iguais!" << std::endl;
    } else {
        std::cout << "Matrizes diferentes!" << std::endl;
    }

    std::cout << "----- M1 -----\n";
    M1.imprimeMatriz(); //Imprime a matriz M1
    std::cout << "----- Produto de M1 e Identidade -----\n";
    R.imprimeMatriz(); //Imprime o resultado da multiplicação feita antes
    R.criaTransposta(&T); //faz a transposta de R
    std::cout << "----- M3 -----\n";
    M3.imprimeMatriz(); //Imprime a M3
    std::cout << "----- Resultado subtração R - M2 -----\n";
    R.subtrai(&M2, &M3); //M3 = R-M2
    M3.imprimeMatriz(); // Imprime M3
    std::cout << "----- Resultado soma M1 + M3 -----\n";
    M1.soma(&M3, &R); //R = M1 + M3
    R.imprimeMatriz(); // Imprime o resultado da soma
    std::cout << "----- M2 -----\n";
    M2.imprimeMatriz(); //Imprime M2
    std::cout << "----- M1 -----\n";
    M1.imprimeMatriz(); //Imprime M1
    std::cout << "----- Resultado multiplicação M1 e M3 -----\n";
    M1.produto(&M3, &R);  //R = M1 * M3
    R.imprimeMatriz(); //Imprime o resultado
    
    return 0;
}
