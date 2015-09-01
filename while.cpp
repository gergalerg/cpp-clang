// while.cpp -- the while loop
// This is an example
#include <iostream>
#include <string>
const int ArSize = 20;
int main() 
{
	using namespace std;
	cout << "Your first name please: ";
	cout << "Here is your name, verticalized and ASCIIized:\n";
	string name1 = "Gregory";
	int i = 0;
	while (name1[i])
	{
		cout << name1[i] << ": " << int(name1[i]) << endl;
		i++;
	}
	return 0;
}
