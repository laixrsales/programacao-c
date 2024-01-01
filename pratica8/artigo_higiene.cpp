#include <string>
#include "artigo_higiene.hpp"

ArtigoHigiene::ArtigoHigiene(int codigo, std::string descricao, float preco) {
    this->_codigo = codigo;
    this->_descricao = descricao;
    this->_precoCompra = preco;
    this->_percentualLucro = 30 * this->_precoCompra / 100;
}

float ArtigoHigiene::gerarPrecoDeVenda() {
    return this->_precoCompra + this->_percentualLucro;
}

int ArtigoHigiene::get_codigo() {
    return this->_codigo;
}
std::string ArtigoHigiene::get_descricao() {
    return this->_descricao;
}
float ArtigoHigiene::get_precoDeCompra() {
    return this->_precoCompra;
}
float ArtigoHigiene::get_lucro() {
    return this->_percentualLucro;
}