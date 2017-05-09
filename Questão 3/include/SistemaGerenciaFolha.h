#ifndef SISTEMAGERENCIAFOLHA_H
#define SISTEMAGERENCIAFOLHA_H
#include "Funcionario.h"
#include "FuncionarioNaoExisteException.h"
#include <iostream>
using namespace std;
class SistemaGerenciaFolha //: public Funcionario
{
    public:
        SistemaGerenciaFolha(Funcionario *funcionario, int n);

        void setFuncionario(Funcionario *funcionario, int);
        void getFuncionario(int);

        double calculaValorTotalFolha();

        double calculaSalarioFuncionario(int n);

    protected:
        Funcionario * funcionario[10];
        int nFuncCadastrados;
};

#endif // SISTEMAGERENCIAFOLHA_H
