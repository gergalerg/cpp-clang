#include <iostream>

using namespace std; 

int main()
{
	int var1;
	char var2[10];
	int *ip;
	char *ch;

	var1 = 4;
	ip = &var1;

	cout << "*ip: " << *ip << endl;

	cout << "address of var1: ";
	cout << &var1 << endl;
	cout << "Size of var1: " << sizeof(var1) << endl;

	cout << "Address of var2: ";
	cout << &var2 << endl;
	cout << "Size of var2: " << sizeof(var2) << endl;

	return 0;
}
