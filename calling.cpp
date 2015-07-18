// calling.cpp -- defining, prototyping, and calling a function
#include <iostream>

void simple(int n); // function prototype

int main()
{
	using namespace std;
	cout << "main() will call the simple() function:\n";
	int x = 8;
	simple(x);   // function call
	cout << "Main() is finished with the simple() function.\n";
	// cin.get();
	return 0;
}

// function definition
void simple(int  n)
{
	using namespace std;
	for (int i = 0; i < n; i++)
		cout << "CHeers!\n";
		cout << endl;
}