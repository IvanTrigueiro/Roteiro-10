#include "Assalariado.h"

Assalariado::Assalariado(string nome, int matricula, double salario)
{
    setNome(nome);
    setMatricula(matricula);
    setSalario(salario);
}

void Assalariado::setSalario(double salario){
    this -> salario = salario;
}
double Assalariado::calculaSalario(){return salario;}
