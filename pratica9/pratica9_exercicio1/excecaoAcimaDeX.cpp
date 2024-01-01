#include "excecaoAcimaDeX.hpp"

const char* ExcecaoAcimaDeX::what() const noexcept {
    return "Erro: A soma total excedeu o valor limite.";
}