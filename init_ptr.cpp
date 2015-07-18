// init_ptr.cpp -- initialize a pointer
#include <iostream>
int main()
{
	using namespace std;
	int higgens = 5;
	int * pt = &higgens;
	char a[] = "hello";

	cout << "Value of higgens = " << higgens
		<< "; Address of higgens = " << &higgens << endl;
	cout << "Value of *pt = " << *pt
		<< "; Value of pt = " << pt << endl;
	cout << "Value of char* a " << a[1] << " " << a[3] << " " << endl;

	return 0;
}