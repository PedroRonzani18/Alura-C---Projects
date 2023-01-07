#include "../Header/Autenticavel.h"

Autenticavel::Autenticavel(std::string senha):
    senha(senha)
    {}

bool Autenticavel::autentica(std::string senha) const
{
    return this->senha == senha;
}