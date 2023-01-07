#pragma once

#include <string>
#include "Cpf.h"
#include "Pessoa.h"

class Funcionario : public Pessoa
{
    private:
        float salario;
    public:
        Funcionario(Cpf cpf, std::string nome, float salario);
        ~Funcionario(){}
};
