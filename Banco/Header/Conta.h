#pragma once

#include <string>
#include <vector>
#include "Titular.h"

class Conta
{
    private:
        Titular titular;
        std::string numero;

    protected:
        float saldo;

    public:
        Conta(std::string numero, float saldo, Titular titular);
        virtual ~Conta(){}

        std::string getNumero() const{return this->numero;}
        float getSaldo() const{return this->saldo;}
        Titular getTitular() const{return this->titular;}

        enum ResultadoSaque 
        {
            Sucesso, ValorNegativo, SalddoInsuficiente
        };

        virtual void sacar(const float& saque);
        void depositar(const float& deposito){this->saldo += deposito;}
        virtual float taxaDeSaque() const = 0;
        
        void operator+=(float valor);
        void operator-=(float valor);
        friend std::ostream& operator<<(std::ostream& cout, const Conta& Conta);
};
