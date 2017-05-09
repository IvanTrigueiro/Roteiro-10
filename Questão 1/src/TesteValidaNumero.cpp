#include "TesteValidaNumero.h"

TesteValidaNumero::TesteValidaNumero()
{

}

void TesteValidaNumero::validaNumero(int num)
{
    try{
    if(num < 0){
        throw ValorAbaixoException();
    }
    if(num > 100 && num <= 1000){
        throw ValorAcimaException();
    }
    if(num > 1000){
        throw ValorMuitoAcimaException();
    }
    if(num >= 0 && num <= 100){
        std::cout<< "Valor valido: " << num <<std::endl;
    }
    }
    catch(ValorAbaixoException ex1)
    {
        //std::cout << "minha msg: " <<std::endl;
        //ValorAbaixoException();
    }
    catch(ValorAcimaException ex2)
    {
        //ValorAcimaException();
    }
    catch(ValorMuitoAcimaException ex3)
    {
        //ValorMuitoAcimaException();
    }
}
