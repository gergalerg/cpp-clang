#include <iostream>

int main() 
{
	double a = 3.1415826534;
	double b = 2006.0;
	double c = 1.0e-4;

	std::cout.precision(5);

	std::cout << "Default\n";
	std::cout << a << '\n' << b << '\n' << c << '\n';

	std::cout << '\n';

	std::cout << "fixed:\n" << std::fixed;
	std::cout << a << '\n' << b << '\n' << c << '\n';

	std::cout << '\n';

	std::cout << "Scientific:\n" << std::scientific;
	std::cout << a << '\n' << b << '\n' << c << '\n';
	return 0; 
}