#include <iostream>
#include <cmath>

class type3 {
private:
    double c;

public:
    type3(double c1) : c(c1) {}

    void Get_answer() {
        if (c == 0) {
            std::cout << "��������� ����� ����������� ��������� �������." << std::endl;
        }
        else {
            std::cout << "��������� �� ����� �������." << std::endl;
        }
    }
    void show() {
        std::cout << "��������� " << c << " = 0" << std::endl;
    }
};