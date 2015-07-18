// Virtual.cpp
#include <iostream>
using namespace std;


class Base
{
protected:
public:
	virtual const char * GetName() { return "Base"; }
};

class Derived: public Base
{
public:
	virtual char * GetName() { 
			return "Derived"; }
};

int main() 
{
	Base myBase;
	Derived cDerived;
	Base &rBase = cDerived;
	char * mystring = "Greg's string";
	cout << "myBase is a " << myBase.GetName() << endl;
	cout << "rBase is a " << rBase.GetName() << endl;
	cout << mystring << endl;

	return 0;
}

