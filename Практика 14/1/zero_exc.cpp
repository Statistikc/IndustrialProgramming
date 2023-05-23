#include "zero_exc.h"

void Divisor::func_Divisor(int val, int del)
{
    double x, y;
    x = val;
    y = del;
    try
    {
        if (y == 0)
            throw std::runtime_error("impossible to do that");
        std::cout << (x / y) << std::endl;
    }
    catch (std::runtime_error &e)
    {
        std::cout << e.what() << std::endl;
    }
}