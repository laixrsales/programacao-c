#ifndef ARTIGO_HIGIENE_H_
#define ARTIGO_HIGIENE_H_
#include <string>

class ArtigoHigiene {
    protected:
        int _codigo;
        std::string _descricao;
        float _precoCompra;
        float _percentualLucro;
    public:
        ArtigoHigiene(int codigo, std::string descricao, float preco);
        virtual float gerarPrecoDeVenda();
        int get_codigo();
        std::string get_descricao();
        float get_precoDeCompra();
        float get_lucro();
};

#endif