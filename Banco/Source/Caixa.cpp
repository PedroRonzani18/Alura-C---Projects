#include "../Header/Caixa.h"

Caixa::Caixa(Cpf cpf, std::string nome, float salario, DiaDaSemana diaPagamento) : 
    Funcionario(cpf,nome,salario, diaPagamento)
    {}

float Caixa::bonificacao() const
{
    return this->salario * 0.1;
}