#include "Number.h"
#include <cmath>
class Real
{
	Number number;
public:
	Number GetNumber() const { return number; }
	void SetNumber(Number value) { number = value; }
	void Init(Number);
	void Display() const;
	void Read();
	double Root( double value);
	static double Power(double value);
};
