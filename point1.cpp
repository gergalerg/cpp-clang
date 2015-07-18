#include <iostream>

using namespace std;

int main() 
{
	int var = 20;	// Variable declaration
	int *ip; 		// Pointer declaration
	

	ip = &var;

	cout << "Value of var variable: ";
	cout << var << endl;

	// print the address stored in ip pointer
	cout << "Address stored in ip variable: ";
	cout << ip << endl;

	// Access teh value at the address available in pointer
	cout << "Value of *ip variable: ";
	cout << *ip << endl;

	return 0;
}