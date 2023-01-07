#pragma once

#include "Cpf.h"
#include <string>
#include <vector>

class Pessoa
{
    protected:
        Cpf cpf;
        std::string nome;

    public:
        Pessoa(Cpf cpf, std::string nome);
        ~Pessoa(){}

        Cpf getCpf() const{return this->cpf;}
        std::string getNome() const{return this->nome;}
        friend std::ostream& operator<<(std::ostream& cout, const Pessoa& titular);

    private:
        std::vector<std::string> tokenize(std::string s, std::string del);
        void verificaTamanhoNome();
};