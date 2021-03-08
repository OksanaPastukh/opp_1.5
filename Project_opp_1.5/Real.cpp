#define _USE_MATH_DEFINES
#include "Real.h"
#include <iostream>
#include <cmath>
using namespace std;

void Real::Init(Number value)
{
	SetNumber(value);
}
void Real::Read()
{
	Number n;
	n.Read(); 
	Init(n);
}
void Real::Display() const
{
	number.Display();
}
double Real::Root(double value)
{
	double result;
	if (GetNumber().GetX() < 0)
	{
		return 0;
	}
	else if (value == 0)
	{ 
		result = 1;
	}
	else
	{
		result = pow(GetNumber().GetX(), 1 / value);
	}
	return result;
}
double Real::Power(double value)
{
	return pow(M_PI, value);
}