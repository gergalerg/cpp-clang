// firstref.cpp 
#include <iostream>
int main()
{
	using namespace std;

	int rats = 101;
	int & rodents = rats;
	int * const prats = &rats;

	cout << "rats = " << rats;
	cout << ", rodents = " << rodents << endl;
	rodents++;
	cout << "rats = " << rats;
	cout << ", rodents = " << rodents << endl;

	cout << "rats address = " << &rats;
	cout << ", rodents adress = " << &rodents << endl;
	cout << &prats << endl;
	cout << *prats << endl;

	return 0;
}