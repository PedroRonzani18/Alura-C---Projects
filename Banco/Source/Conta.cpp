#include "../Header/Conta.h"
#include <iostream>

Conta::Conta(std::string numero, float saldo, Titular titular):
    titular(titular),
    numero(numero),
    saldo(saldo)
    {}

std::variant<Conta::ResultadoSaque,float> Conta::sacar(const float& saque)
{
    if (saque < 0) 
    {
        std::cout << "Não se pode sacar valores negativos" << std::endl;
        return ResultadoSaque::ValorNegativo;
    }

    if(saque * (1 + taxaDeSaque()) > saldo) 
    {
        std::cout << "Saldo insuficiente" << std::endl;
        return ResultadoSaque::SalddoInsuficiente;
    }

    saldo -= saque * (1 + taxaDeSaque());
    return saldo;
}

void Conta:: operator+=(float valor) {depositar(valor);}

void Conta::operator-=(float valor) {sacar(valor);}

std::ostream& operator<<(std::ostream& cout, const Conta& conta)
{
    std::cout << conta.getTitular();
    std::cout << "Numero da Conta: " << conta.numero << std::endl;
    std::cout << "Saldo: " << conta.saldo;
    return cout;
}
