#include "temp.h"

Class::Class(int A, float B)
{
    a = A;
    b = B;
}

void Class::Out()
{
    std::cout << "(" << a << ";" << b << ")\n";
}

Class Class::operator=(Class &T)
{
    a = T.a;
    b = T.b;
    return *this;
}