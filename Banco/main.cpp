#include "Header/Conta.h"
#include "Header/ContaPolpanca.h"
#include "Header/ContaCorrente.h"

#include <iostream>

int main()
{
    ContaPolpanca conta ("123",0,Titular(Cpf("432"),"Pedro Augusto"));
    conta.depositar(500);
    conta.sacar(200);
    std::cout << conta.getSaldo() << std::endl;

    ContaCorrente conta2 ("123",0,Titular(Cpf("432"),"Pedro Augusto"));
    conta2.depositar(500);
    conta2.sacar(200);
    std::cout << conta2.getSaldo() << std::endl;
}