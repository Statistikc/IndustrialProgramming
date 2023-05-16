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
};