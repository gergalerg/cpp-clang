// express.cpp 
#include <iostream>
int main()
{
	using namespace std;
	int x;

	cout << "The expression x = 100 has the value ";
	cout << (x = 100) << endl;
	cout.setf(ios_base::boolalpha);
	cout << "x < 3 has teh value ";
	cout << (x < 3) << endl;
}
