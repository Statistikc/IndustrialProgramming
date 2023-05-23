#include "mass_Div.h"
#include <iostream>

void Divisior::mass_div(int mas[], int num)
{
    try
    {
        if (num > 3)
            throw std::runtime_error("This is does not exist \n");
        std::cout << mas[num] << std::endl;
    }
    catch (std::runtime_error &e)
    {
        std::cout << "runtime_error\n"
                  << e.what();
    }
}