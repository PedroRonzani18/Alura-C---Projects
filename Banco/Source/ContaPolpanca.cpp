#include "../Header/ContaPolpanca.h"
#include <iostream>

ContaPolpanca::ContaPolpanca(std::string numero, float saldo, Titular titular) :
    Conta(numero,saldo,titular) 
    {}

float ContaPolpanca::taxaDeSaque() const
{
    return 0.03;
}
