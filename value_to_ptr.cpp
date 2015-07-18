// value to poitner
#include <iostream>
int main() 
{
	using namespace std;
	int * pt = new int[10];
	*pt = 5;
	cout << pt[0] << endl;
	return 0;
}