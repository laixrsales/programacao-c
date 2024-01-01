#ifndef ARQUIVO_IP_H_
#define ARQUIVO_IP_H_
#include <fstream>
#include <string>
#include <vector>

class ArquivoIP {
private:
    std::ifstream _entrada;
    std::ofstream _saida;
    std::vector<std::string> _ipValido;
    std::vector<std::string> _ipInvalido;

public:
    ArquivoIP(std::string nomeEntrada, std::string nomeSaida);
    ~ArquivoIP();
    void leIP();
    void escreveIP();

};

#endif