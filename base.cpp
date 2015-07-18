// Base.cpp -- a skeleton for trying out stuff
#include <iostream>
#include <cstring>
using namespace std;
char * getname(void); // function prototype

int main() 
{
	char * name; 		// create pointer but not storage

	name = getname();	// assign address of string to name
	cout << name << " at " << (int *) name << "\n";
	delete [] name; 	// memory freed

	name = getname();	// assign address of string to name
	cout << name << " at " << (int *) name << "\n";
	delete [] name; 	// memory freed
	return 0;
}

char * getname() 
{
	char temp[80]; 		// temp storage
	cout << "Enter last name: ";
	cin >> temp;
	char *pn = new char[strlen(temp) + 1];
	strcpy(pn, temp);

	return pn;
}