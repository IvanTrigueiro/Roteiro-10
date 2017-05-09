#ifndef CONTA_H
#define CONTA_H
#include "IConta.h"
#include "SaldoNaoDisponivelException.h"
#include <string>
using namespace std;

class Conta : public IConta, public SaldoNaoDisponivelException
{
    public:
        Conta();
        Conta(string nomeCliente, double salarioMensal, int numeroConta, double saldo);

        void setCliente(string nomeCliente);
        void setMensal(double salarioMensal);
        void setConta(int numeroConta);
        void setSaldo(double saldo);
        virtual void definirLimite();

        virtual void sacar(double valor);
        virtual void depositar(double valor);

        string getCliente();
        double getMensal();
        int getConta();
        double getSaldo();
        double getLimite();

    protected:
        double salarioMensal, saldo, limite;
        int numeroConta;
        string nomeCliente;
};

#endif // CONTA_H
