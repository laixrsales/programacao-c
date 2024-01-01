/* INF112 - PROGRAMAÇÃO II
   Prática 8 - Polimorfismo
   Exercício 1
   Laís Reis de Sales - 96862
   07 de novembro de 2023
*/

#include <iostream>
#include "artigo_higiene.hpp"
#include "remedio.hpp"

int main() {
    Remedio r1(123, "Amoxilina", 500.0, 5.0, 10);
    Remedio r2(456, "Ibuprofeno", 2000.0, 7.0, 20);

    ArtigoHigiene ah1(789, "Desodorante", 1500.0);
    ArtigoHigiene ah2(112, "Shampoo", 800.0);

    std::cout << "Código: " << r1.get_codigo() << " - Descrição: " <<
    r1.get_descricao() << " - % de Lucro: " << r1.get_lucro() << 
    " - Preço de Compra: " << r1.get_precoDeCompra() << " - Valor do desconto: " <<
    r1.get_desconto() << " - Preço de venda: " << r1.gerarPrecoDeVenda() << std::endl;

    std::cout << "Código: " << r2.get_codigo() << " - Descrição: " <<
    r2.get_descricao() << " - % de Lucro: " << r2.get_lucro() << 
    " - Preço de Compra: " << r2.get_precoDeCompra() << " - Valor do desconto: " <<
    r2.get_desconto() << " - Preço de venda: " << r2.gerarPrecoDeVenda() << std::endl;

    std::cout << "Código: " << ah1.get_codigo() << " - Descrição: " <<
    ah1.get_descricao() << " - % de Lucro: " << ah1.get_lucro() << 
    " - Preço de Compra: " << ah1.get_precoDeCompra() << " - Preço de venda: " << 
    ah1.gerarPrecoDeVenda() << std::endl;

    std::cout << "Código: " << ah2.get_codigo() << " - Descrição: " <<
    ah2.get_descricao() << " - % de Lucro: " << ah2.get_lucro() << 
    " - Preço de Compra: " << ah2.get_precoDeCompra() << " - Preço de venda: " << 
    ah2.gerarPrecoDeVenda() << std::endl;

    return 0;
}
