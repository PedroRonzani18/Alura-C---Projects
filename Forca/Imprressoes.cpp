#include "Impressioes.h"
#include <iostream>

void chutesErrados(std::vector<char> erros)
{
    std::cout << "Chutes errados: ";
    for(char l: erros)
        std::cout << l << " ";
    std::cout << std::endl;
}

void cabecalho(std::string amostra)
{
    std::cout << "Tente adivinhar a palavra secreta" << std::endl;
    std::cout << amostra << " : ";
}