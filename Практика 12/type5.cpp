#include <iostream>
#include <cmath>

class type5 {
private:
    double b, c;

public:
    type5(double b1, double c1) : b(b1), c(c1) {}

    void Get_answer() {
        double root = -c / b;
        std::cout << "Уравнение имеет один корень: x = " << root << std::endl;
    }
    void show() {
        std::cout << "Уравнение " << b << " * x + " << c << " = 0" << std::endl;
    }
    void Get_answer_podbor() {
        double min = std::abs(0 - b * (-20) - c);
        double x = -20;
        for (double i = -2000; i <= 2000; i += 1) {
            double result = std::abs(0 - b * i/100 - c);
            if (result < min) {
                min = result;
                x = i/100;
            }
        }
        std::cout << "Приближенно (методом подбора) один из корней уравнения равен:" << x << std::endl;
    }
};