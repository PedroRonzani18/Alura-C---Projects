#ifndef Leilao_hpp
#define Leilao_hpp

#include <vector>
#include <string>
#include "Lance.h"

class Leilao
{
    private:
        std::vector<Lance> lances;
        std::string descricao;
        
    public:
        Leilao(std::string descricao);

        const std::vector<Lance>& getLances() const{return lances;}
        void addLance(const Lance& lance);
};

#endif
