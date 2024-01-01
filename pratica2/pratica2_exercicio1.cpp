/* INF112 - PROGRAMAÇÃO II
   Prática 2 - Alocação Dinâmica e Valgrind
   Exercício 1 - Simulador de par ou ímpar
   Feito por laixrsales
*/

#include <iostream>
#include <cstdlib>

void preencheAleatorios(int *ponteiro, int tamanho) {
    for (int i = 0; i < tamanho; i++){
        ponteiro[i] = rand() % 10;
    }
}

void imprime(int *ponteiro, int tamanho) {
    for (int i = 0; i < tamanho; i++){
        std::cout << ponteiro[i] << ", ";
    }

    std::cout << std::endl;
}

void contaParImpar(int *ponteiroA, int *ponteiroB, int tamanho, int &par, int &impar) {
    for (int i = 0; i < tamanho; i++){
        if((ponteiroA[i] + ponteiroB[i]) % 2 == 0){
            par++;
        }
        else {
            impar++;
        }
    }
}

int main() {
    int totalJogadas = 0;
    while (true){
        int par = 0;
        int impar = 0;
        std::cout << "Digite a quantidade de jogadas a simular: ";
        std::cin >> totalJogadas;
        if (totalJogadas == -1){
            break;
        } else{
            int *pArranjoA = new int [totalJogadas];
            int *pArranjoB = new int [totalJogadas];

            preencheAleatorios(pArranjoA, totalJogadas);
            preencheAleatorios(pArranjoB, totalJogadas);

            imprime(pArranjoA, totalJogadas);
            imprime(pArranjoB, totalJogadas);

            contaParImpar(pArranjoA, pArranjoB, totalJogadas, par, impar);
            
            std::cout << "Par: " << par << std::endl;
            std::cout << "Ímpar: " << impar << std::endl;
            delete[] pArranjoA;
            delete[] pArranjoB;
        }
    }


    return 0;
}
