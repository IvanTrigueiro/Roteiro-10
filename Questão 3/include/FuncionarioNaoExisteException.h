#ifndef FUNCIONARIONAOEXISTEEXCEPTION_H
#define FUNCIONARIONAOEXISTEEXCEPTION_H
#include <exception>
#include <stdexcept>
#include <iostream>
using namespace std;

class FuncionarioNaoExisteException : public runtime_error
{
    public:
        FuncionarioNaoExisteException():runtime_error("msg"){}
        virtual const char* what() const throw(){
            return "Funcionario nao cadastrado!";
        }
};

#endif // FUNCIONARIONAOEXISTEEXCEPTION_H
