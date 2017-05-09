#include "Horista.h"

Horista::Horista(string nome, int matricula, double salarioPorHora, double horaTrabalhada)
{
    setNome(nome);
    setMatricula(matricula);
    setSalarioPorHora(salarioPorHora);
    setHoraTrabalhada(horaTrabalhada);
}

        void Horista::setSalarioPorHora(double salarioPorHora){
            this -> salarioPorHora = salarioPorHora;
        }
        void Horista::setHoraTrabalhada(double horaTrabalhada){
            this -> horaTrabalhada = horaTrabalhada;
        }
        double Horista::getSalarioPorHora(){return salarioPorHora;}
        double Horista::getHoraTrabalhada(){return horaTrabalhada;}
        double Horista::calculaSalario(){
            //terminar de implementar
            return getSalarioPorHora()*getHoraTrabalhada();
        }
