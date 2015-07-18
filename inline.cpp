// inline.cpp -- using an inline function
#include <iostream>

// an inline function definition
inline float square(double x) { return x * x; }

int main()
{
	using namespace std;
	long a, b, c;
	c = 13.0;

	a = square(5.0);
	b = square(4.5 + 7.5); // can pass expression
	cout << "a = " << a << ", b = " << b << "\n";
	cout << "c = " << c;
	cout << ", c squared = " << square(++c) << "\n";
	cout << "now c = " << c << "\n";
	return 0;
}

