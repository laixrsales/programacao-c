#ifndef REMEDIO_H_
#define REMEDIO_H_
#include "artigo_higiene.hpp"

class Remedio : public ArtigoHigiene {
    private:
        int _desconto;
    public:
        Remedio(int codigo, std::string descricao, float preco, float lucro, int desconto);
        virtual float gerarPrecoDeVenda() override;
        int get_desconto();

};

#endif