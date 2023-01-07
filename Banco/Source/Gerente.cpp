#include "../Header/Gerente.h"

Gerente::Gerente(Cpf cpf, std::string nome, float salario, std::string senha, DiaDaSemana diaPagamento) : 
    Funcionario(cpf,nome,salario, diaPagamento),
    Autenticavel(senha)
    {}

float Gerente::bonificacao() const
{
    return 0.5 * salario;
}