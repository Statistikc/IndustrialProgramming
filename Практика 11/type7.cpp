#include <iostream>
#include <cmath>

class type7 {
private:
    double b;

public:
    type7(double b1) : b(b1) {}

    void Get_answer() {
        std::cout << "��������� ����� ���� ������: x = 0" << std::endl;
    }
    void show() {
        std::cout << "��������� " << b << " * x = 0" << std::endl;
    }
};