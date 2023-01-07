#pragma once

#include "Funcionario.h"

class Caixa : public Funcionario
{
private:
    /* data */
public:
    Caixa(Cpf cpf, std::string nome, float salario, DiaDaSemana diaPagamento);
    float bonificacao() const override;
};
