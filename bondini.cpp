// bondini.cpp -- using escape sequences
#include <iostream>
int main()
{
	using namespace std;
	int updates = 6;
	int * p_updates = &updates;

	cout << p_updates << "\t" << updates << endl;
	*p_updates = *p_updates + 1;
	cout << * p_updates << "\t" << updates << endl;
	int * pn = new int;
	* pn = 1001;
	cout << * pn << endl;
	double * pd = new double;
	*pd = 10000001.0;
	cout << *pd << endl;
	cout << sizeof(*pd) << endl;
	cout << sizeof(*pn) << endl;
	delete pd;
	cout << * pd << endl;
	delete pn;
	cout << * pn << endl;
	return 0;
} 