#pragma once

#include <string>

class Cpf
{
    private:
        std::string valor;

    public:
        Cpf();
        Cpf(std::string valor);

        std::string getValor(){return this->valor;}
};