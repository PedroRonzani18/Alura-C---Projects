#ifndef Lance_hpp
#define Lance_hpp

#include "Usuario.h"

class Lance
{
private:
    Usuario usuario;
    float valor;
public:
    Lance(Usuario usuario, float valor);
    float getValor() const{return valor;}
    Usuario getUsuario() const {return usuario;}
};

#endif 
