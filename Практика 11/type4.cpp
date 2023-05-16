#include <iostream>
#include <cmath>

class type4 {
private:
    double a, c;

public:
    type4(double a1, double c1) : a(a1), c(c1) {}

    void Get_answer() {
        double discriminant = -4 * a * c;

        if (discriminant > 0) {
            double root1 = std::sqrt(-c / a);
            double root2 = -std::sqrt(-c / a);
            std::cout << "Уравнение имеет два вещественных корня: x1 = " << root1 << ", x2 = " << root2 << std::endl;
        }
        else if (discriminant == 0) {
            double root = std::sqrt(-c / a);
            std::cout << "Уравнение имеет один корень: x = " << root << std::endl;
        }
        else {
            std::cout << "Уравнение не имеет вещественных корней." << std::endl;
        }
    }
    void show() {
        std::cout << "Уравнение " << a << " * x^2 + " << c << " = 0" << std::endl;
    }
};