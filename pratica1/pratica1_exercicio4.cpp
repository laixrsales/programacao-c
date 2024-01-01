/* Prática 1 - Ponteiros
   Exercício 4
   Feito por laixrsales */

#include <iostream>

struct Jogador {
    int pontos;
    int x, y;
};

void leDadosJogador(Jogador *ptrJ){
    std::cin >> (*ptrJ).pontos >> (*ptrJ).x >> (*ptrJ).y;
}

int main(){
    Jogador j[5];

    for (int i = 0; i < 5; i++){
        leDadosJogador(j + i);
    }

    for (int i = 0; i < 5; i++){
        std::cout << j[i].pontos << ' ' << j[i].x << ' ' << j[i].y << std::endl;
    }
    return 0;
}