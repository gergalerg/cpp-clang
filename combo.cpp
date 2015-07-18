// combo.cpp
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	antarctic s01, s02, s03;	
	const antarctic * arp[3] = {&s01, &s02, &s03};

	antarctic trio[3];
	trio[0].year = 2003;
	(trio+ 1)->year = 2004;
	s01.year = 2555;

	cout << arp[0]-year << endl;
	cout << &trio[0] << endl;
	cout << arp << endl;
	cout << arp + 1 << endl;
	cout << sizeof(trio) << endl;


	return 0;
}