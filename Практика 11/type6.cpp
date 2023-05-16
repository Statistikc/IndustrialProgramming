#include <iostream>
#include <cmath>

class type6 {
private:
    double a, b, c;

public:
    type6(double a1, double b1, double c1) : a(a1), b(b1), c(c1) {}

    void Get_answer() {
        double discriminant = b * b - 4 * a * c;

        if (discriminant > 0) {
            double root1 = (-b + std::sqrt(discriminant)) / (2 * a);
            double root2 = (-b - std::sqrt(discriminant)) / (2 * a);
            std::cout << "Уравнение имеет два корня: x1 = " << root1 << ", x2 = " << root2 << std::endl;
        }
        else if (discriminant == 0) {
            double root = -b / (2 * a);
            std::cout << "Уравнение имеет один корень: x = " << root << std::endl;
        }
        else {
            std::cout << "Уравнение не имеет вещественных корней." << std::endl;
        }
    }
    void show() {
        std::cout << "Уравнение " << a << " * x^2 + " << b << " * x + " << c << " = 0" << std::endl;
    }
};