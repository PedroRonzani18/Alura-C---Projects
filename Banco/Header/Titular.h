#pragma once

#include <string>
#include <vector>

#include "Pessoa.h"

class Titular : public Pessoa
{
    public: 
        Titular(Cpf cpf, std::string nome);
        ~Titular(){}
};