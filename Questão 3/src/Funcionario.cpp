#include "Funcionario.h"

Funcionario::Funcionario(/*string nome, int matricula*/)
{
//    setNome(nome);
//    setMatricula(matricula);
}

        string Funcionario::getNome(){return nome;}
        int Funcionario::getMatricula(){return matricula;}
        void Funcionario::setNome(string nome){
            this -> nome = nome;
        }
        void Funcionario::setMatricula(int matricula){
            this -> matricula = matricula;
        }
