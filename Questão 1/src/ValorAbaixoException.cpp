#include "ValorAbaixoException.h"
#include <iostream>
using namespace std;
ValorAbaixoException::ValorAbaixoException()
{
    std::cout << "Valor menor ou igual a zero. " <<std::endl;
}
