#include <iostream>
#include "triangle.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    Triangle mas[3];
    for (int i = 0; i < 3; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        mas[i].set(a, b, c);
        if (mas[i].exst_tr() == 0)
        {
            cout << "íå ïîäõîäèò" << endl;
            i--;
        }
        mas[i].show();
        cout << mas[i].perimetr() << endl;
        cout << mas[i].square() << endl;
    }
}