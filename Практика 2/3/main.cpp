﻿#include "figure.h"
#include <iostream>


int main()
{
	using namespace std;
	figure mas[3];

	float a, b, c, d, e, f, g, h;
	for (int i = 0; i < 3; i++)
	{
		cout << i + 1 << " (x1, x2, x3, x4, y1, y2, y3, y4): ";
		cin >> a >> b >> c >> d >> e >> f >> g >> h;
		mas[i] = figure(a, b, c, d, e, f, g, h);
	}


	for (int i = 0; i < 3; i++)
	{
		cout << i + 1 << endl;

		mas[i].show();
		cout << endl;

		cout << "prug(): " << mas[i].prug() << endl;
		cout << "square(): " << mas[i].square() << endl;
		cout << "romb(): " << mas[i].romb() << endl;
		cout << "in_circle(): " << mas[i].in_circle() << endl;
		cout << "out_circle(): " << mas[i].out_circle() << endl;
	}
}