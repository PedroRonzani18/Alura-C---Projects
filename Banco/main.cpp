#include "Header/Conta.h"
#include "Header/ContaPolpanca.h"
#include <iostream>

int main()
{
    ContaPolpanca conta ("123",0,Titular(Cpf("432"),"Pedro Augusto"));
    conta.depositar(500);
    conta.sacar(200);
    std::cout << conta.getSaldo() << std::endl;
}