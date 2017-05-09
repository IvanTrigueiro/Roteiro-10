#include "Comissionado.h"

Comissionado::Comissionado(string nome, int matricula, double vendasSemanais, double percentualComissao)
{
    setNome(nome);
    setMatricula(matricula);
    setVendasSemanais(vendasSemanais);
    setPercentualComissao(percentualComissao);
}

        void Comissionado::setVendasSemanais(double vendasSemanais){
            this -> vendasSemanais = vendasSemanais;
        }
        void Comissionado::setPercentualComissao(double percentualComissao){
            this -> percentualComissao = percentualComissao;
        }
        double Comissionado::getVendasSemanais(){return vendasSemanais;}
        double Comissionado::getPercentualComissao(){return percentualComissao;}
        double Comissionado::calculaSalario(){
            return (getVendasSemanais()+(getVendasSemanais()*getPercentualComissao()));
        }
