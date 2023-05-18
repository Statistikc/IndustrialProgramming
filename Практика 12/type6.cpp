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
            std::cout << "��������� ����� ��� �����: x1 = " << root1 << ", x2 = " << root2 << std::endl;
        }
        else if (discriminant == 0) {
            double root = -b / (2 * a);
            std::cout << "��������� ����� ���� ������: x = " << root << std::endl;
        }
        else {
            std::cout << "��������� �� ����� ������������ ������." << std::endl;
        }
    }
    void show() {
        std::cout << "��������� " << a << " * x^2 + " << b << " * x + " << c << " = 0" << std::endl;
    }
    void Get_answer_podbor() {
        double discriminant = b * b - 4 * a * c;
        if (discriminant < 0) {
            std::cout << "��������� �� ����� ������������ ������." << std::endl;
        }
        else {
            double min = std::abs(0 - a * (-20) * (-20) - b * (-20) - c);
            double x = -20;
            for (double i = -2000; i <= 2000; i += 1) {
                double result = std::abs(0 - a * i/100 * i/100 - b * i/100 - c);
                if (result < min) {
                    min = result;
                    x = i/100;
                }
            }
            std::cout << "����������� (������� �������) ���� �� ������ ��������� �����:" << x << std::endl;
        }
    }
};