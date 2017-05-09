#ifndef SALDONAODISPONIVELEXCEPTION_H
#define SALDONAODISPONIVELEXCEPTION_H
#include <exception>
#include <stdexcept>
#include <iostream>
using namespace std;

class SaldoNaoDisponivelException : public runtime_error{
    public:
        SaldoNaoDisponivelException():runtime_error("msg"){}
        virtual const char* what() const throw(){
            return "Saldo indisponivel!";
        }
};

#endif // SALDONAODISPONIVELEXCEPTION_H
