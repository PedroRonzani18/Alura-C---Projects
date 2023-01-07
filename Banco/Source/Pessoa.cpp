#include "../Header/Pessoa.h"
#include <iostream>

std::vector<std::string> Pessoa::tokenize(std::string s, std::string del = " ")
{
    std::vector<std::string> retorno;
    int start, end = -1*del.size();
    do 
    {
        start = end + del.size();
        end = s.find(del, start);
        retorno.push_back(s.substr(start, end - start));
    } while (end != -1);
    return retorno;
}

void Pessoa::verificaTamanhoNome()
{
    if(tokenize(this->nome," ").size() < 2) 
        std::cout << "Nome muito curto" << std::endl;
}

Pessoa::Pessoa(Cpf cpf, std::string nome):
    cpf(cpf), 
    nome(nome)
    {
        verificaTamanhoNome();
    }

std::ostream& operator<<(std::ostream& cout, const Pessoa& pessoa)
{
    std::cout << "Nome: " << pessoa.nome << std::endl;
    std::cout << pessoa.cpf;
    return cout;
}