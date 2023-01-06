#include "../Header/Parser.h"
#include <fstream>
#include <iostream>

std::vector<std::string> leitura(const std::string path)
{
    std::fstream arquivo;
    std::string buffer;
    std::vector<std::string> words;

    arquivo.open(path,std::fstream::in);

    if(arquivo.is_open())
        while (getline(arquivo,buffer))
            words.push_back(buffer);
    
    else std::cout << "Erro na abertura do arquivo " << path << std::endl;

    arquivo.close();

    return words;
}

void adicionaPalavra(const std::string path)
{
    std::cout << "Palavra a ser adicionada: ";
    std::string aux; std::cin >> aux;

    for(size_t i=0; i<aux.size(); i++)
        aux[i] = std::toupper(aux[i]);

    std::cout << "Letra: " << aux << std::endl;

    std::ofstream arquivo;
    arquivo.open(path,std::ios_base::app);

    if(arquivo.is_open())
    {
        arquivo << aux << std::endl;
    }
    else std::cout << "Erro na abertura do arquivo " << path << std::endl;

    arquivo.close();
}