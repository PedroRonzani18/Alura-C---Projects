#include "../Header/Avaliador.h"
#include <algorithm>

Avaliador::Avaliador() : 
    maiorValor(0)
    {}

bool Avaliador::ordenaLances(const Lance& lance1, const Lance& lance2)
{
    return lance1.getValor() > lance2.getValor();
}

void Avaliador::avaliar(const Leilao& leilao)
{
    std::vector<Lance> lances = leilao.getLances();

    std::sort(lances.begin(),lances.end(),ordenaLances  );

    maiorValor = lances.front().getValor();
    menorValor = lances.back().getValor();

    maiores3Lances = std::vector<Lance>(lances.begin(), 
                                        lances.begin() + (lances.size() > 3? 3 : lances.size()));
}