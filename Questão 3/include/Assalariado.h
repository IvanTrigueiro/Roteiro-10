#ifndef ASSALARIADO_H
#define ASSALARIADO_H
#include "Funcionario.h"

class Assalariado : public Funcionario
{
    public:
        Assalariado(string nome, int matricula, double salario);
        void setSalario(double salario);
        double calculaSalario();
    protected:
        double salario;
};

#endif // ASSALARIADO_H
