#pragma once

#include "Leilao.h"
#include <climits>
#include <vector>

class Avaliador
{
private:
    float maiorValor = INT_MIN;
    float menorValor = INT_MAX;
    std::vector<Lance> maiores3Lances;
    static bool ordenaLances(const Lance&, const Lance&);
public:
    Avaliador();

    float getMaiorValor() const {return maiorValor;}
    void avaliar(const Leilao&);
    std::vector<Lance> getMaiores3Lances() const{return maiores3Lances;}
};
