#pragma once
#include <string> 
#include <sstream>
using namespace std;

class Number
{
	double x;
public:
	double GetX() const { return x; }
	void SetX(double value) { x = value; }
	void Init(double);
	void Read();
	void Display() const;
	string toString() const;
	static Number Remove(Number l, Number r);
	static Number Multiply(Number l, Number r);
};