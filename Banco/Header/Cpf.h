#pragma once

#include <string>

class Cpf
{
    private:
        std::string valor;

    public:
        Cpf(std::string valor);

        std::string getValor(){return this->valor;}

        friend std::ostream& operator<<(std::ostream& cout, const Cpf& cpf);
};