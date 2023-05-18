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
            std::cout << "��������� ����� ��� ������������ �����: x1 = " << root1 << ", x2 = " << root2 << std::endl;
        }
        else if (discriminant == 0) {
            double root = std::sqrt(-c / a);
            std::cout << "��������� ����� ���� ������: x = " << root << std::endl;
        }
        else {
            std::cout << "��������� �� ����� ������������ ������." << std::endl;
        }
    }
    void show() {
        std::cout << "��������� " << a << " * x^2 + " << c << " = 0" << std::endl;
    }
    void Get_answer_podbor() {
        double discriminant = -4 * a * c;
        if (discriminant < 0) {
            std::cout << "��������� �� ����� ������������ ������." << std::endl;
        }
        else {
            double min = std::abs(0 - a * (-20) * (-20) - c);
            double x = -20;
            for (double i = -2000; i <= 2000; i += 1) {
                double result = std::abs(0 - a * i/100 * i/100 - c);
                if (result < min) {
                    min = result;
                    x = i/100;
                }
            }
            std::cout << "����������� (������� �������) ���� �� ������ ��������� �����:" << x << std::endl;
        }
    }
};