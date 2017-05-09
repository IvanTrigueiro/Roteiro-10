#include "Conta.h"
#include <iostream>


Conta::Conta(){}

Conta::Conta(string nomeCliente, double salarioMensal, int numeroConta, double saldo)
{
    setCliente(nomeCliente);
    setMensal(salarioMensal);
    setConta(numeroConta);
    setSaldo(saldo);
}

void Conta::sacar(double valor){
    if(valor > getSaldo()){
        throw SaldoNaoDisponivelException();
    }
    std::cout << "Valor sacado: " << valor <<endl;
    setSaldo(getSaldo() - valor);
}
void Conta::depositar(double valor){
    std::cout << "Valor depositado: " << valor <<endl;
    setSaldo(getSaldo() + valor);
}


void Conta::setCliente(string nomeCliente){
    this->nomeCliente = nomeCliente;
}

void Conta::setMensal(double salarioMensal){
    this->salarioMensal = salarioMensal;
}

void Conta::setConta(int numeroConta){
    this->numeroConta = numeroConta;
}

void Conta::setSaldo(double saldo){
    this-> saldo = saldo;
}

void Conta::definirLimite(){
    limite = getSaldo()*2;
}

string Conta::getCliente(){return nomeCliente;}

double Conta::getMensal(){return salarioMensal;}

int Conta::getConta(){return numeroConta;}

double Conta::getSaldo(){return saldo;}

double Conta::getLimite(){return limite;}




