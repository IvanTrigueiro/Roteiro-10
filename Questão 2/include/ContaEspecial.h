#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H
#include "Conta.h"

class ContaEspecial : public Conta
{
    public:
        ContaEspecial();
        virtual void definirLimite();
    protected:
};

#endif // CONTAESPECIAL_H
