// lotto1.cpp 
#include <iostream>
using namespace std;

const double total = 38;
const double choices = 6;
long double probability(unsigned numbers, unsigned picks);

int main()
{
	cout << probability(total, choices);
	cout << endl;
	return 0;
}

long double probability(unsigned numbers, unsigned picks)
{
	long double result = 1.0;
	long double n;
	unsigned p;

	for (n = numbers, p = picks; p > 0; n--, p--)
		result = result * n / p;
	return result;
}