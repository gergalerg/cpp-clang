// condit.cpp -- using the conditional operator
#include <iostream>
const char x[2][20] = {"Jason ", " at your service\n"};
const char * y = "Quillstone";
int main()
{
	using namespace std;
	cout << x[0] << y << x[1] << endl;
	for (int i=0; i < 3; i++)
	cout << ((i < 2) ? !i ? x[i] : y : x[1]);
	return 0;
}