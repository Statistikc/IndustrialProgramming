#include <iostream>
#include <cmath>

class type2 {
private:
    double a;

public:
    type2(double a1) : a(a1) {}

    void Get_answer() {
        std::cout << "��������� ����� ���� ������: x = 0" << std::endl;
    }
    void show() {
        std::cout << "��������� " << a << "*x^2=0" << std::endl;
    }
};