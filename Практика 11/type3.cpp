#include <iostream>
#include <cmath>

class type3 {
private:
    double c;

public:
    type3(double c1) : c(c1) {}

    void Get_answer() {
        if (c == 0) {
            std::cout << "Уравнение имеет бесконечное множество решений." << std::endl;
        }
        else {
            std::cout << "Уравнение не имеет решений." << std::endl;
        }
    }
    void show() {
        std::cout << "Уравнение " << c << " = 0" << std::endl;
    }
};