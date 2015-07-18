// struct4.11
#include <iostream>

int main() {
	using namespace std;
	struct things
	{
		int good;
		int bad;
	};

	things grubnose = {3, 453};
	things * pt = &grubnose;
	myadd = &things;

	cout << "grubnose.good " << grubnose.good << endl;
	cout << "grubnose.bad " << grubnose.bad << endl;

	cout << "pt->good " << pt->good << endl; 
	cout << "pt->bad " << pt -> bad << endl;

	return 0;
}