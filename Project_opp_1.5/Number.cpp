#include "Number.h"
#include <iostream>
using namespace std;

void Number::Init(double value)
{
	x = value;
}
void Number::Read()
{
	double x;
	cout << " Enter the value =  "; cin >> x;
	Init(x);
}
void Number::Display() const
{
	cout << toString() << endl;

}
string Number::toString() const
{
	std::string str = "Value is " + std::to_string(x);
	return str;
}

Number Number::Remove(Number l, Number r)
{
	Number t;
	t.x = l.x - r.x;
	return t;
}
Number Number::Multiply(Number l, Number r)
{
	Number t;
	t.x = l.x * r.x;
	return t;
}