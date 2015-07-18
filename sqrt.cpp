#include <iostream>
#include <math.h>

float FastInvSqrt(float x);
double InvertSqrt(double x);

int main() 
{
	using namespace std;

	cout << "FastInvSqrt = " << FastInvSqrt(12.5) << endl;
	int j = 12;
	cout << "Normal Sqrt = " << InvertSqrt(j) << endl;
}
float FastInvSqrt(float x) {
	float xhalf = 0.5f * x;
	std::cout << xhalf << std::endl;
	int i = *(int*)&x;  //evil floating point bit level hacking
	i = 0x5f3759df - (i >> 1);  // what the fuck
	std::cout << i << std::endl;
	x = *(float*)&i;
	x = x*(1.5f - (xhalf*x*x));
	return x;
}
double InvertSqrt(double x) 
{
	if (x <= 0)
		return 0;
	int exp = 0;
	x = frexp(x, &exp);
	if (exp & 1) {  // we want exponent to be even
		exp--;
		x *= 2;
	}
	double y = (1+x)/2;  // first approximation
	double z = 0;
	while (y != z) 
	{
		z = y;
		y = (y + x/y) / 2;
	}
	return 1 / ldexp(y, exp/2); // multiply answer by 2^(exp/2)
}