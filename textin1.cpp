// textin1.cpp -- reading chars in a hwile loop
#include <iostream>
int main()
{
	using namespace std;
	char ch;
	int count = 0;			// use basic input
	cout << "Enter characters; enter # to quit:\n1: "; 
	cin >> ch;
	while (ch != '#')
	{
		++count;
		cout << count + 1 << " "; cin >> ch;
	}
	cout << endl << count << " characters read\n";
	return 0;
}