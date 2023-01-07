#include "../Header/ContaCorrente.h"

ContaCorrente::ContaCorrente(std::string numero, float saldo, Titular titular) : 
    Conta(numero,saldo,titular)
    {}

float ContaCorrente::taxaDeSaque() const
{
    return 0.05;
}