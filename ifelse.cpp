// ifelse.cpp -- using the if else statement
#include <iostream>
int main()
{
	char ch;

	std::cout << "Type, and I shall repeat.\n";
	std::cin.get(ch);
	while (ch != '.')
	{
		if (ch == '\n')
			std::cout << ch;
		else
			std::cout << ++ch; 
		std::cin.get(ch);
	}
	std::cout << sizeof(ch);
	// try ch + 1 of ++ch for interesing effect
	std::cout << "\nPlease excuse the slight confusion.\n";
	
	return 0;
}