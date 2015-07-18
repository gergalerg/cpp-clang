// exceed.cpp -- exceeding some integer limits
#include <iostream>
#define ZERO 0 //makes ZERO symbol for 0 value
#include <climits> // defines INT_MAX as largest int value
int main()
{ 
	using namespace std;
	short sam = SHRT_MAX;
	int bigger = INT_MAX;

	cout << " 'short sam = SHRT_MAX' = " << sam << endl;
	cout << "Address sam = " << &sam << endl;
	cout << "Size of sam = " << sizeof(sam) << endl;
	cout << " 'int bigger = INT_MAX =' " << bigger << endl;
	cout << "Sizeof bigger = " << sizeof bigger << endl;
	cout << "Address bigger = " << &bigger << endl;
	return 0;
}