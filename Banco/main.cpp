#include "Header/Conta.h"
#include "Header/ContaPolpanca.h"
#include "Header/ContaCorrente.h"
#include "Header/Caixa.h"

#include "Header/Autenticavel.h"
#include <iostream>

int main()
{
    ContaCorrente conta ("123",0,Titular(Cpf("432"),"Pedro Augusto","123"));

    std::cout << conta << std::endl;
}