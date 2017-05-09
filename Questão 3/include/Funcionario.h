#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>
using namespace std;

class Funcionario
{
    public:
        Funcionario(/*string nome, int matricula*/);
        //virtual ~Funcionario();
        string getNome();
        int getMatricula();
        void setNome(string nome);
        void setMatricula(int matricula);
        virtual double calculaSalario()=0;

    protected:
        string nome;
        int matricula;
};

#endif // FUNCIONARIO_H
