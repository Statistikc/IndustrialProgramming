#include <iostream>
#include <cmath>

class type5 {
private:
    double b, c;

public:
    type5(double b1, double c1) : b(b1), c(c1) {}

    void Get_answer() {
        double root = -c / b;
        std::cout << "��������� ����� ���� ������: x = " << root << std::endl;
    }
    void show() {
        std::cout << "��������� " << b << " * x + " << c << " = 0" << std::endl;
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
        std::cout << "����������� (������� �������) ���� �� ������ ��������� �����:" << x << std::endl;
    }
};