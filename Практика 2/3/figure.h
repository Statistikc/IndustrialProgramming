#include <iostream>
#include <cmath>

class figure
{
private:
	float x1, x2, x3, x4;
	float y1, y2, y3, y4;
	float a_kord, b_kord, c_kord, d_kord;
	float d1, d2;
	float ang1, ang2, ang3, ang4;
	float S;
	float P;

	float get_ang(float x0, float y0, float x1, float y1, float x2, float y2);
public:
	figure();
	figure(float X1, float X2, float X3, float X4, float Y1, float Y2, float Y3, float Y4);
	void show();
	bool prug();
	bool square();
	bool romb();
	bool in_circle();
	bool out_circle();

};