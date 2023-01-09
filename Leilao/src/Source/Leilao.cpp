#include "../Header/Leilao.h"

Leilao::Leilao(std::string descricao): 
    descricao(descricao)
    {}

void Leilao::addLance(const Lance& lance)
{

    if(!lances.empty())
    {
        if(lances.back().getUsuario().getNome() != lance.getUsuario().getNome())
        {
            lances.push_back(lance);
        }
    }
    else lances.push_back(lance);
}

