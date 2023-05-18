#include <iostream>
#include <cmath>
#include "type1.cpp"
#include "type2.cpp"
#include "type3.cpp"
#include "type4.cpp"
#include "type5.cpp"
#include "type6.cpp"
#include "type7.cpp"
#include "type8.cpp"

int main()
{
    system("chcp 1251 > nul");

    int equationType;
    std::cout << "Выберите тип уравнения:" << std::endl;
    std::cout << "1. 0 = 0" << std::endl;
    std::cout << "2. ax^2 = 0" << std::endl;
    std::cout << "3. c = 0" << std::endl;
    std::cout << "4. ax^2 + c = 0" << std::endl;
    std::cout << "5. bx + c = 0" << std::endl;
    std::cout << "6. ax^2 + bx + c = 0" << std::endl;
    std::cout << "7. bx = 0" << std::endl;
    std::cout << "8. ax^2 + bx = 0" << std::endl;
    std::cout << "Введите номер типа уравнения: ";
    std::cin >> equationType;

    switch (equationType)
    {
    case 1:
    {
        type1 Solver;
        Solver.show();
        Solver.Get_answer();
        break;
    }

    case 2:
    {
        double a;
        std::cout << "Введите значение a: ";
        std::cin >> a;

        type2 Solver(a);
        Solver.show();
        Solver.Get_answer();
        break;
    }

    case 3:
    {
        double c;
        std::cout << "Введите значение c: ";
        std::cin >> c;

        type3 Solver(c);
        Solver.show();
        Solver.Get_answer();
        break;
    }

    case 4:
    {
        double a, c;
        std::cout << "Введите значения a, c: ";
        std::cin >> a >> c;

        type4 Solver(a, c);
        Solver.show();
        Solver.Get_answer();
        Solver.Get_answer_podbor();
        break;
    }

    case 5: {
        double b, c;
        std::cout << "Введите значения b, c: ";
        std::cin >> b >> c;

        type5 Solver(b, c);
        Solver.show();
        Solver.Get_answer();
        Solver.Get_answer_podbor();
        break;
    }
    
    case 6: {
        double a, b, c;
        std::cout << "Введите значения a, b, c: ";
        std::cin >> a >> b >> c;

        type6 Solver(a, b, c);
        Solver.show();
        Solver.Get_answer();
        Solver.Get_answer_podbor();
        break;
    }

    case 7: {
        double b;
        std::cout << "Введите значение b: ";
        std::cin >> b;

        type7 Solver(b);
        Solver.show();
        Solver.Get_answer();
        break;
    }

    case 8: {
        double a, b;
        std::cout << "Введите значения a, b: ";
        std::cin >> a >> b;

        type8 Solver(a, b);
        Solver.show();
        Solver.Get_answer();
        Solver.Get_answer_podbor();
        break;
    }

    default:
        std::cout << "Неверный номер типа уравнения." << std::endl;
        break;
    }

    return 0;
}