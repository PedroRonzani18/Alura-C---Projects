#include "../Header/ContaCorrente.h"

ContaCorrente::ContaCorrente(std::string numero, float saldo, Titular titular) : 
    Conta(numero,saldo,titular)
    {}

float ContaCorrente::taxaDeSaque() const
{
    return 0.05;
}

void ContaCorrente::transferePara(Conta& destino, const float& valor)
{
    sacar(valor);
    destino.depositar(valor);
}

void ContaCorrente::operator+=(ContaCorrente& contaOrigem)
{
    contaOrigem.transferePara(*this,contaOrigem.getSaldo());
}