#include "../Header/Jogo.h"
#include "../Header/Impressioes.h"
#include "../Header/Parser.h"
#include <iostream>

#define MAX_NUM_TRIERS  6

void endGame(const bool& venceu, const bool& perdeu, const std::string palavra)
{
    if(perdeu) std::cout << "Voce perdeu. A palavra era " << palavra << std::endl;
    if(venceu) 
    {
        std::cout << "Voce venceu!! Gostaria de adicionar uma nova palavra ao banco? (S/N) ";
        char resposta; std::cin >> resposta;
        if(std::toupper(resposta) == 'S')
            adicionaPalavra("assets/banco.txt");
    }
}

void setup(std::string& palavra, std::string amostra)
{
    srand(time(NULL));

    std::vector<std::string> palavras = leitura("assets/banco.txt");
    palavra = palavras[rand()%(palavras.size())];

    for(size_t i=0; i<palavra.size(); i++) 
        amostra += "_ ";
    amostra.pop_back();

    cabecalho(amostra);
}

void tentativa(int& tries, std::vector<char>& erros, std::string& palavra, std::string amostra)
{
    char chute; std::cin >> chute; chute = std::toupper(chute);

    if(palavra.find(chute) == std::string::npos)
    {
        tries ++;

        erros.push_back(chute);
        if(MAX_NUM_TRIERS-tries > 0)
            std::cout << "Errado! " << MAX_NUM_TRIERS-tries << " tentativas restantes" << std::endl;
    }
    else
    {
        for(size_t i = 0; i<palavra.size(); i++)
            if(palavra[i] == chute) 
                amostra[2*i] = chute;
    }
}

void game()
{
    std::vector<char> erros;
    bool venceu = false, perdeu = false;
    int tries = 0;
    std::string palavra;
    std::string amostra = "";
    
    setup(palavra, amostra);

    while(!venceu && !perdeu)
    {
        if(tries == MAX_NUM_TRIERS)
        {
            perdeu = true;
            break;
        }

        tentativa(tries, erros, palavra, amostra);        
        chutesErrados(erros);

        if(amostra.find("_") == std::string::npos) 
            venceu = true;

        if(!perdeu)
        {
            std::cout << amostra;
            if(!venceu) std::cout << " : ";
            else        std::cout << std::endl;
        }
    }

    endGame(venceu, perdeu, palavra);
}

void play()
{
    game();
}