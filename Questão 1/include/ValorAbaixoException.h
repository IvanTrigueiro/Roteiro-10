#ifndef VALORABAIXOEXCEPTION_H
#define VALORABAIXOEXCEPTION_H
#include <exception>
#include <iostream>

class ValorAbaixoException : public std::exception
{
    public:
        ValorAbaixoException();

};

#endif // VALORABAIXOEXCEPTION_H
