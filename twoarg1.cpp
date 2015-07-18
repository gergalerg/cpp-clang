// twoarg1.cpp
#include <iostream>
using namespace std;
void n_chars(char, int);

int main() 
{
	double * pn;
	double * pa;
	char * pc;
	double bubble = 3.2;
	pn = &bubble;
	pc = new char;
	pa = new double;

	cout << pn << endl;
	cout << * pn << endl;
	cout << &bubble << endl;
	cout << *pc << endl;
	return 0;
}

void n_chars(char c, int n) // displays c n times
{
	while (n-- > 0) 
		cout << c;
}