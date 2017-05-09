#ifndef ORCAMENTOESTOURADOEXCEPTION_H
#define ORCAMENTOESTOURADOEXCEPTION_H
#include <exception>
#include <stdexcept>
#include <iostream>
using namespace std;

class OrcamentoEstouradoException : public runtime_error
{
    public:
        OrcamentoEstouradoException():runtime_error("msg"){}
        virtual const char* what() const throw(){
            return "Orçamento estourado!";
        }
};

#endif // ORCAMENTOESTOURADOEXCEPTION_H
