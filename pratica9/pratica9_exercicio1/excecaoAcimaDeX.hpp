#ifndef EXCECAO_ACIMA_DE_X_H
#define EXCECAO_ACIMA_DE_X_H
#include <stdexcept>

class ExcecaoAcimaDeX : public std::exception {
    public:
        virtual const char* what() const noexcept override;
};

#endif