// enum.cpp -- using enum
#include <iostream>
// create named constants for 0 - 6
enum colors  { red, orange, yellow, green, blue, violet, indigo};

int main()
{
	using namespace std;
	cout << "Enter color code (0 - 6): ";
	int code;
	cin >> code;
	while (code >= red && code <= indigo)
	{
		switch(code)
		{
			case red : cout << "her lips were " << code <<".\n"; break;
			case orange : cout << "Her lips were " << code << ".\n"; break;
			case yellow : cout << "Her shoes were " << code << "\n"; break;
			case green : cout << "Her nails were " << code <<".\n"; break;
			case blue : cout << "Her suit was " << code << "\n"; break;
			case violet : cout << "her eyes were " << code << "\n"; break;
			case indigo : cout << "Her mood was " << code << "\n"; break;
		}
		cout << "Enter color code (0 - 6): ";
		cin >> code;
	}
	cout << "Bye\n";
	return 0;
} 