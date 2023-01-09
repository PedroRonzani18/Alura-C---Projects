
//#define CATCH_CONFIG_MAIN
#include "../src/Header/Avaliador.h"
#include <iostream>
//#include "catch.h"
/*
TEST_CASE("Deve recuperar maior lance do leilao em ordem crescente")
{
    // Preparando o ambiente
    Lance primeiroLance(Usuario("Pedro"),1000);
    Lance segundoLance(Usuario("Maria"),2000);

    Leilao leilao("Fiat 147");
    leilao.addLance(primeiroLance);
    leilao.addLance(segundoLance);

    Avaliador leiloeiro;

    // Executando o codigo a ser testado
    leiloeiro.avaliar(leilao);

    // Verificando funcionamento
    REQUIRE(2000 == leiloeiro.getMaiorValor());
}
*/

int main()
{
    // Preparando o ambiente
    Lance primeiroLance(Usuario("Augusto"),2000);
    Lance seg(Usuario("Pedro"),4000);
    Lance terc(Usuario("Jose"),1000);
    Lance quar(Usuario("Maria"),3000);

    Leilao leilao("Fiat 147");
    leilao.addLance(primeiroLance);
    leilao.addLance(seg);
    leilao.addLance(terc);
    leilao.addLance(quar);

    Avaliador leiloeiro;

    // Executando o codigo a ser testado
    leiloeiro.avaliar(leilao);

    std::vector<Lance> maiores = leiloeiro.getMaiores3Lances();

}