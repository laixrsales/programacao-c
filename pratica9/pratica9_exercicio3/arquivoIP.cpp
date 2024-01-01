#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include "arquivoIP.hpp"

ArquivoIP::ArquivoIP(std::string nomeEntrada, std::string nomeSaida){
    _entrada.open(nomeEntrada);
    _saida.open(nomeSaida);
     
     if (! _entrada.is_open()){
        throw std::ios_base::failure("Erro:: Não foi possível abrir o arquivo "+ nomeEntrada);
     }

     if (! _saida.is_open()){
        throw std::ios_base::failure("Erro:: Não foi possível abrir o arquivo "+ nomeSaida);
     }
}

ArquivoIP::~ArquivoIP(){
    try {
        _entrada.close();
        _saida.close();
    } catch (const std::ios_base::failure &e){
        std::cerr << "Erro ao fechar os arquivos: " << e.what() << std::endl;
    }
}

void ArquivoIP::leIP(){
    char *ip = new char[15];
    int numero;
    std::string conteudo;
    bool invalido;

    while (true){
        invalido = false;
        _entrada.getline(ip, 15);

        std::istringstream ss(ip);

        while (std::getline(ss, conteudo, '.')){
            numero = stoi(conteudo);
            if (numero < 0 || numero > 255){
                invalido = true;
            }
        }

        if (invalido){
            _ipInvalido.push_back(ip);
        } else {
            _ipValido.push_back(ip);
        }

        if (_entrada.eof()) break;
    }
}

void ArquivoIP::escreveIP(){
    _saida << "[Endereços válidos:]" << std::endl;
    for (std::string valor : _ipValido){
        _saida << valor << std::endl;
    }

    _saida << "[Endereços inválidos:]" << std::endl;
    for (std::string valor : _ipInvalido){
        _saida << valor << std::endl;
    }

}