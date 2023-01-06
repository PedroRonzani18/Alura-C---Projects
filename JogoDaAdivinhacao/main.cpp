#include <iostream>
#include <ctime>

int main()
{
    srand(time(NULL));
    const float RESPOSTA = rand()%101;

    int incorreto = true;
    int chances;

    while(incorreto)
    {
        incorreto = false;
        std::cout << "Nivel de dificuldade(1,2,3): " << std::endl;
        int dificuldade; std::cin >> dificuldade;

        switch (dificuldade)
        {
            case 1:
                chances = 15;
                break;

            case 2:
                chances = 10;
                break;
            
            case 3:
                chances = 5;
                break;

            default:
                std::cout << "Digite uma dificuldade válida." << std::endl;
                incorreto = true;
                break;
        }
    }

    float desconto = 0;

    for(int i = 0; i < chances; i++)
    {
        std::cout << "Tentativa " << i+1 << ": ";
        float chute; std::cin >> chute;

        if(chute == RESPOSTA)
        {
            std::cout.precision(2); std::cout << std::fixed;

            std::cout << "Você venceu em " << i+1 << " tetativas! Pontuação: " << 1000 - desconto << std::endl;
            return 0;
        }else if(chute < RESPOSTA) std::cout << "A respota é maior que isso." << std::endl;
         else                      std::cout << "A respota é menor que isso." << std::endl;

        desconto += (float)abs(chute - RESPOSTA)/2;
    }

    std::cout << "Você perdeu!" << std::endl;

    return 0;
}