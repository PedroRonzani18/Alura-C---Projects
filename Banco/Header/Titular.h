#pragma once

#include <string>
#include <vector>

#include "Pessoa.h"
#include "Autenticavel.h"

class Titular : public Pessoa, Autenticavel
{
    public: 
        Titular(Cpf cpf, std::string nome, std::string senha);
        ~Titular(){}

};