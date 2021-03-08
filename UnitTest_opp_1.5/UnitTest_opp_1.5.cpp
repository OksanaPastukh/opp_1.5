#include "pch.h"
#include "CppUnitTest.h"
#define _USE_MATH_DEFINES
#define M_PI 3.14159265358979323846
#include <cmath>
#include "../Project_opp_1.5/Number.cpp"
#include "../Project_opp_1.5/Real.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestopp15
{
	TEST_CLASS(UnitTestopp15)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double c;
			Number n;
			n.Init(8);
			Real r;
			r.Init(n);
			c = r.Root(3);
			Assert::AreEqual(c, 2.0);
		}
	};
}
