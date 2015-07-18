// calling.cpp -- defining prototyping and calling a function
#include <iostream>

void simple();
double cube(double x);
void n_chars(char, int);

int main()
{
	std::cout << "main() will call the simple() function: \n";
	simple();
	std::cout << "main() is finished with the simple() function\n";
	double q = cube(3.0);
	std::cout << "Address of main q: " <<  &q << std::endl;
	std::cout << q << std::endl;
	char h = 'r';
	char * p_char;
	p_char = &h;
	std::cout << p_char << std::endl;
	n_chars(h, 3);
	return 0;
}

// function definition
void simple()
{
	std::cout << "I'm but a simple function\n";
}

double cube(double x) 
{
	std::cout << "Address of cube(x): " << &x << std::endl;
	return x * x * x;
}

void n_chars(char c, int n)
{
	std::cout << c << " " << n << std::endl;
}