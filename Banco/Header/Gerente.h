#pragma once

#include "Funcionario.h"
#include "Autenticavel.h"

class Gerente : public Funcionario, Autenticavel
{
private:
    /* data */
public:
    Gerente(Cpf cpf, std::string nome, float salario, std::string senha, DiaDaSemana diaPagamento);
    float bonificacao() const override;
};

