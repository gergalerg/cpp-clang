// strgback.cpp -- a funciton that returns a pointer
#include <iostream>
char * buildstr(char c, int n); // prototype to function 
int main() 
{
	using namespace std;
	int times;
	char ch;

	// cout << "Enter a character: ";
	ch = 'm';
	// cin >> ch;
	// cout << "Enter an integer: ";
	times = 10;
	// cin >> times;
	char *ps = buildstr(ch, times);
	cout << ps << endl;
	cout << &ps << endl;
	delete [] ps; 		// free memory
	ps = buildstr('+', 20); // reuse pointer
	cout << ps << "-DONE-" << ps << endl;
	cout << &ps << endl;
	delete [] ps;
	return 0;
}

// builds string made of n c characters
char * buildstr(char c, int n)
{
	char * pstr = new char[n + 1];
	pstr[n] = '\0';
	while (n-- > 0)
		pstr[n] = c;
	return pstr;
}