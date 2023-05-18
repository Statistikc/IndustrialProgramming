#include <iostream>
#include <cmath>

class type8 {
private:
    double a, b;

public:
    type8(double a1, double b1) : a(a1), b(b1) {}

    void Get_answer() {
        double root = -b / a;
        std::cout << "Уравнение имеет два кореня: x1 = 0, x2 = " << root << std::endl;
    }
    void show() {
        std::cout << "Уравнение " << a << " * x^2 + " << b << " * x = 0" << std::endl;
    }
    void Get_answer_podbor() {
        double min = std::abs(0 - a * (-20) * (-20) - b * (-20));
        double x = -20;
        for (double i = -2000; i <= 2000; i = i + 1) {
            if (i != 0) {
                double result = std::abs(0 - (a * i/100 * i/100) - (b * i/100));
                if (result < min) {
                    min = result;
                    x = i/100;
                }
            }
        }
        std::cout << "Приближенно (методом подбора) один из корней уравнения равен:" << x << std::endl;
    }
};