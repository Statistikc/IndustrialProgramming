#include "circle.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	float a, b, c;
	cin >> a >> b >> c;
	circle some_circ(a, b, c);
	cin >> a >> b >> c;
	some_circ.set_circle(a, b, c);
	cout << some_circ.square() << endl;
	cin >> a >> b >> c;
	cout << some_circ.triangle_around(a, b, c) << endl;
	cout << some_circ.triangle_in(a, b, c) << endl;
	cout << "ââĺäčňĺ đŕäčóń č ęîîđäčíŕňű" << endl;
	cin >> a >> b >> c;
	cout << some_circ.check_circle(a, b, c);
}