#include "../Header/Cpf.h"
#include <iostream>

Cpf::Cpf(std::string valor):
    valor(valor)
    {}

std::ostream& operator<<(std::ostream& cout, const Cpf& cpf)
{
    std::cout << "CPF: " << cpf.valor << std::endl;
    return cout;
}