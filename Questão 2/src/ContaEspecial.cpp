#include "ContaEspecial.h"

ContaEspecial::ContaEspecial()
{
    setMensal(7000);
}

void ContaEspecial::definirLimite(){
    limite = 3*getMensal();
}
