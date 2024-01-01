#include <string>
#include "remedio.hpp"

Remedio::Remedio(int codigo, std::string descricao, float preco, float lucro, int desconto) :
ArtigoHigiene(codigo, descricao, preco), _desconto(desconto) {
    this->_percentualLucro = lucro;
}

float Remedio::gerarPrecoDeVenda() {
    return this->_precoCompra + this->_percentualLucro - this->_desconto;
}

int Remedio::get_desconto() {
    return this->_desconto;
}
