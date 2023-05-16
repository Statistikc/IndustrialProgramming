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
};