#include <iostream>
#include "TesteValidaNumero.h"
using namespace std;

int main()
{
    int numero;
    TesteValidaNumero lol;
    for( ; ; ){
    cout << "Digite um numero valido: " << endl;
    cin >> numero;
    lol.validaNumero(numero);
    }
    return 0;
}
