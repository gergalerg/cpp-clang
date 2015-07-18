// textin3.cpp -- reading chars to end of line
#include <iostream>
int main()
{
	using namespace std;
	char ch;
	int count = 0;
	cin.get(ch);		// attempt to read a char
	while (cin.get(ch))   // test for EOF
	{
		cout << ch;
		++count;
	}
	cout << endl << count << " characters read\n";
	return 0;
}