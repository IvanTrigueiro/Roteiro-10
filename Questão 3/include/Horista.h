#ifndef HORISTA_H
#define HORISTA_H
#include "Funcionario.h"

class Horista : public Funcionario
{
    public:
        Horista(string nome, int matricula, double salarioPorHora, double horaTrabalhada);
        void setSalarioPorHora(double salarioPorHora);
        void setHoraTrabalhada(double horaTrabalhada);
        double getSalarioPorHora();
        double getHoraTrabalhada();
        double calculaSalario();
    protected:
        double salarioPorHora, horaTrabalhada;
};

#endif // HORISTA_H
