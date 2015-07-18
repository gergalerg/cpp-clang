// protos.cpp -- using prototypes and function calls
#include <iostream>
void cheers(int);
void new_cheers(int);
double cube(double x);
int main()
{
	using namespace std;
	new_cheers(5);
	cout << "Give me a number: ";
	double side;
	cin >> side;
	double volume = cube(side); // function call
	cout << "A " << side << "-foot cube has a volume of ";
	cout << volume << " cubic feet.\n";
	cheers(cube(side)); // prototype protection at work
	return 0;
}

void cheers(int n)
{
	using namespace std;
	for (int i = 0; i < n; i++)
		cout << i + 1 << endl;
	cout << endl;
}
void new_cheers(int n)
{
	using namespace std;
	for (int i = 0; i < n; i++)
		cout << "Cheers! ";
	cout << endl;
}

double cube(double x)
{
	return x * x * x;
}