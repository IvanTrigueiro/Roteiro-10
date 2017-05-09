#ifndef EXCEPTION_H
#define EXCEPTION_H
#include <exception>

class Exception : public std::exception
{
    public:
        Exception();
};

#endif // EXCEPTION_H
