#include "SistemaGerenciaFolha.h"

SistemaGerenciaFolha::SistemaGerenciaFolha(Funcionario *funcionario, int n)
{
    setFuncionario(funcionario, n);
    nFuncCadastrados = 0;
}

void SistemaGerenciaFolha::setFuncionario(Funcionario *funcionario, int n){
    this->funcionario[n] = funcionario;
    nFuncCadastrados++;
}

void SistemaGerenciaFolha::getFuncionario( int n){
    cout << funcionario[n]->getNome() <<" -- " << funcionario[n]->getMatricula() << endl;
}

double SistemaGerenciaFolha::calculaValorTotalFolha(){
    static double total = 0;
    for(int i = 0; i <= nFuncCadastrados; i++){
        total += funcionario[i]->calculaSalario();
    }
    return total;
}

double SistemaGerenciaFolha::calculaSalarioFuncionario(int n){
    if(n > nFuncCadastrados){
        throw FuncionarioNaoExisteException();
    }
    return funcionario[n]->calculaSalario();
}
