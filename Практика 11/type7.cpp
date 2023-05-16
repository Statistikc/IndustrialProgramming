#include <iostream>
#include <cmath>

class type7 {
private:
    double b;

public:
    type7(double b1) : b(b1) {}

    void Get_answer() {
        std::cout << "Уравнение имеет один корень: x = 0" << std::endl;
    }
    void show() {
        std::cout << "Уравнение " << b << " * x = 0" << std::endl;
    }
};