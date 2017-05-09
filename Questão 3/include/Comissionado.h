#ifndef COMISSIONADO_H
#define COMISSIONADO_H
#include "Funcionario.h"

class Comissionado : public Funcionario
{
    public:
        Comissionado(string nome, int matricula, double vendasSemanais, double percentualComissao);
        void setVendasSemanais(double vendasSemanais);
        void setPercentualComissao(double percentualComissao);
        double getVendasSemanais();
        double getPercentualComissao();
        double calculaSalario();

    protected:
        double vendasSemanais, percentualComissao;
};

#endif // COMISSIONADO_H
