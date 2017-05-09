#include <iostream>
#include "SistemaGerenciaFolha.h"
#include "Assalariado.h"
#include "Horista.h"
#include "Comissionado.h"
using namespace std;

int main()
{
     Assalariado assalariado("Ivan", 123, 5000);
    cout << assalariado.getNome() << " -> Salario: "<< assalariado.calculaSalario();
    cout << " -> Matricula: " << assalariado.getMatricula() <<endl;

    Comissionado comissionado("Joao", 321,100, 30);
    cout << comissionado.getNome() << " -> Salario: "<< comissionado.calculaSalario();
    cout <<  " -> Matricula: " << comissionado.getMatricula() <<endl;

    Horista horista("Junior", 111, 100, 40);
    cout << horista.getNome() << " -> Salario: "<< horista.calculaSalario();
    cout << " -> Matricula: " << horista.getMatricula() <<endl;

    Horista * horista1 = new Horista("Thiago", 222, 200, 50);
    SistemaGerenciaFolha sistema(horista1, 0);
    sistema.getFuncionario(0);
    cout << sistema.calculaSalarioFuncionario(0) <<endl;
    cout << sistema.calculaValorTotalFolha() <<endl;

    try{
        cout << sistema.calculaSalarioFuncionario(1) <<endl;
    }
    catch(FuncionarioNaoExisteException &ex)
    {
        cout<<ex.what()<<endl;
    }


    /*Assalariado * assalariado1 = new Assalariado("Juan", 4312, 30000);
    SistemaGerenciaFolha sistema2(assalariado1, 1);
    sistema2.getFuncionario(1);
    cout << sistema2.calculaSalarioFuncionario(1) << endl;
    cout << sistema2.calculaValorTotalFolha() << endl;*/
    return 0;
}
