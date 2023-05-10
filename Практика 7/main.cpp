#include <iostream>
#include <cmath>
#include "type1.cpp"
#include "type2.cpp"

int main()
{
    int equationType;
    std::cout << "Выберите тип уравнения:" << std::endl;
    std::cout << "1. 0 = 0" << std::endl;
    std::cout << "2. ax^2 = 0" << std::endl;

    switch (equationType)
    {
    case 1:
    {
        type1 Solver;
        Solver.Get_answer();
        Solver.show();
        break;
    }
    case 2:
        {
        double a;
        std::cout << "Введите значение a: ";
        std::cin >> a;

        type2 Solver(a);
        Solver.Get_answer();
        Solver.show();
        break;
        }

    default:
        std::cout << "Неверный номер типа уравнения." << std::endl;
        break;
    }

    return 0;
}