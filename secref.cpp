// secref.cpp defining and using a reference stream
#include <iostream>
int main()
{
	using namespace std;
	int rats = 101;
	int & rodents = rats;  // rodents is a reference

	cout << "rats = " << rats;
	cout << "rodents = " << rodents << endl;

	cout << "rats address = " << &rats << endl;
	cout << "rodents address = " << &rodents << endl;

	int bunnies = 50;
	rodents = bunnies; // can we change the reference?
	cout << "Bunnies = " << bunnies;
	cout << "rats  = " << rats;
	cout << "rodents = " << rodents << endl;

	cout << "bunnies address = " << &bunnies << endl;
	cout << "rodents address = " << &rodents << endl;

	return 0;
}
