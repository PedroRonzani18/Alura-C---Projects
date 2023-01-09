#include <iostream>
#include <string>
#include <memory>
#include "src/Header/Usuario.h"

void* operator new(size_t bytes)
{
    std::cout << "Alocando " << bytes << " bytes" << std::endl;
    return malloc(bytes);
}

int main()
{
    // g++ em 64 bits alloca no maximo strings de 15 cacracteres na stack(valores com <= 15 melhor string)
    std::string completo = "Pedro & Augusto";

    std::string_view nome(completo.c_str(),completo.find('&')-1);
    std::string_view sobre(completo.c_str() + completo.find('&')-1 + 2);

    std::unique_ptr <Usuario> usuario = std::make_unique<Usuario>();

    std::cout << nome << std::endl << sobre << std::endl;
    return 0;
}