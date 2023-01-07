#pragma once

#include "Conta.h"

class ContaPolpanca : public Conta
{
    public:
        ContaPolpanca(std::string numero, float saldo, Titular titular);
        float taxaDeSaque() const override;
};
