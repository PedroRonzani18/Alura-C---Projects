#include "../Header/ContaPolpanca.h"
#include <iostream>

ContaPolpanca::ContaPolpanca(std::string numero, float saldo, Titular titular) :
    Conta(numero,saldo,titular) 
    {}

void ContaPolpanca::sacar(const float& saque)
{
    if (saque < 0) std::cout << "Não se pode sacar valores negativos" << std::endl;
    else if(saque * 1.03 > saldo) std::cout << "Saldo insuficiente" << std::endl;
    else saldo -= saque * 1.03;
}
