#pragma once

#pragma once
#include <set>
#include <iostream>
#include <stdexcept>

class Divisior
{
public:
    template <class Div>
    static Div get(std::set<Div> set)
    {
        try
        {
            if (set.begin() == set.end())
                throw std::out_of_range("Out of range");
            return *set.begin();
        }
        catch (std::out_of_range &e)
        {
            std::cout << e.what() << std::endl;
            return Div();
        }
    }
};