#include "temp.h"

template <class haha, class hehe>
void Swap(haha &x, hehe &y)
{
    haha z = x;
    x = y;
    y = z;
}

template <class nice>
void Out(nice &x, nice &y)
{
    std::cout << x << " " << y << "\n";
}

int main()
{
    using namespace std;
    string a = "aasasas";
    string b = "hghgghgh";
    int x = 1, y = 2;
    float fx = 12.3, fy = 53.1;
    Class T1(1, 1.5), T2(2, 14.3);
    cout << "Before:" << endl;
    cout << "a=" << a << "; b=" << b << ";\n";
    cout << "x=" << x << "; y=" << y << ";\n";
    cout << "fx=" << fx << "; fy=" << fy << ";\n";
    cout << "T1=";
    T1.Out();
    cout << "T2=";
    T2.Out();

    Swap(a, b);
    Swap(x, y);
    Swap(fx, fy);
    Swap(T1, T2);

    cout << "\nAfter:" << endl;
    cout << "a=" << a << "; b=" << b << ";\n";
    cout << "x=" << x << "; y=" << y << ";\n";
    cout << "fx=" << fx << "; fy=" << fy << ";\n";
    cout << "T1=";
    T1.Out();
    cout << "T2=";
    T2.Out();

    return 0;
}