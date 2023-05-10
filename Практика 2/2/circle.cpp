﻿#include <cmath>
#include <iostream>
#include "circle.h"
using namespace std;

circle::circle(float r, float x, float y)
{
	radius = r;
	x_center = x;
	y_center = y;
}
void circle::set_circle(float r, float x, float y)
{
	radius = r;
	x_center = x;
	y_center = y;
}
float circle::square() {
	return radius * radius * 3.14;
}
bool circle::triangle_around(float a, float b, float c)
{
	float pol_per = (a + b + c) / 2;
	float S = sqrt(pol_per * (pol_per - a) * (pol_per - b) * (pol_per - c));
	return a * b * c / 4 / S == radius;
}
bool circle::triangle_in(float a, float b, float c)
{
	float pol_per = (a + b + c) / 2;
	float S = sqrt(pol_per * (pol_per - a) * (pol_per - b) * (pol_per - c));
	return radius == S / pol_per;
}
bool circle::check_circle(float r, float x_cntr, float y_cntr)
{
	float a = x_center - x_cntr;
	float b = y_center - y_cntr;
	float dist = sqrt(a * a + b * b);
	return dist - radius - r <= 0;
}