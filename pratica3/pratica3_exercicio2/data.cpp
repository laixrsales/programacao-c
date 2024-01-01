#include <iostream>
#include <iomanip>
#include <string.h>
#include "data.h"

Data::Data(int dia, int mes, int ano) {
    _dia = dia;
    _mes = mes;
    _ano = ano;
}

void Data::exibirDataFormatoNumero() {
    std::cout << std::setfill('0') << std::setw(2) << _dia << '/' << std::setfill('0') 
                << std::setw(2) << _mes << '/' << _ano << std::endl;
}

void Data::exibirDataPorExtenso() {
    char nomeMes[31];
    switch(_mes) {
        case 1:
            strcpy(nomeMes,"janeiro");
            break;
            
        case 2:
            strcpy(nomeMes,"fevereiro");
            break;
        case 3:
            strcpy(nomeMes,"março");
            break;
        case 4:
            strcpy(nomeMes,"abril");
            break;
        case 5:
            strcpy(nomeMes,"maio");
            break;
        case 6:
            strcpy(nomeMes,"junho");
            break;
        case 7:
            strcpy(nomeMes,"julho");
            break;
        case 8:
            strcpy(nomeMes,"agosto");
            break;
        case 9:
            strcpy(nomeMes,"setembro");
            break;
        case 10:
            strcpy(nomeMes,"outubro");
            break;
        case 11:
            strcpy(nomeMes,"novembro");
            break;
        case 12:
            strcpy(nomeMes,"dezembro");
            break;
    }

    std::cout << std::setfill('0') << std::setw(2) << _dia << " de " << nomeMes << ' ' << _ano << std::endl;
}

void Data::getDataEmSegundos() {
    int dataSegundos = 0;
    dataSegundos += (_ano - 1970) * 365;
    dataSegundos += (_mes - 1) * 30;
    dataSegundos += _dia;
    dataSegundos *= 86400;
    std::cout << dataSegundos << std::endl;
}