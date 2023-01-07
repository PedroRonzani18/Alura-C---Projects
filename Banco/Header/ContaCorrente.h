#pragma once

#include "Conta.h"

class ContaCorrente final : public Conta
{
    public:
        ContaCorrente(std::string numero, float saldo, Titular titular);
        float taxaDeSaque() const override;
};