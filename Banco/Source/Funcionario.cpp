#include "../Header/Funcionario.h"

Funcionario::Funcionario(Cpf cpf, std::string nome, float salario, DiaDaSemana diaPagamento) :
    Pessoa(cpf,nome),
    salario(salario),
    diaPagamento(diaPagamento)
    {}