// output.cpp
#include <iostream>
#include <fstream>

#define SUBLIME

#if defined SUBLIME
# 	define ISTREAM ifile
#else
#	define ISTREAM std::cin
#endif

int main()
{
	int a, b, c;
	std::cout << "Enter: ";
	#if defined (SUBLIME)
		std::ifstream ifile("stdin.input");
	#endif
	ISTREAM >> a >> b;
	c = a + b;
	std::cout << a << '+' << b << '=' << c << std::endl;
	return 0;
}  