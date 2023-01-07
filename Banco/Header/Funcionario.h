#pragma once

#include <string>
#include "Cpf.h"
#include "Pessoa.h"
#include "DiaSemana.h"

class Funcionario : public Pessoa
{
    protected:
        float salario;
        DiaDaSemana diaPagamento;

    public:
        Funcionario(Cpf cpf, std::string nome, float salario, DiaDaSemana diaPagamento);
        virtual ~Funcionario(){}
        
        virtual float bonificacao() const = 0;
};
