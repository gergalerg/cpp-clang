// fill_array.cpp
#include <iostream>

// void fill_array(double, int);

int main() 
{
	fill_array();
	return 0;
}
int fill_array(double ar[], int limit)
{
	using namespace std;
	double temp;
	int i;
	for (i = 0; i < limit; i++)
	{
		cout << "Enter value #" << (i + 1) << ": ";
		cin >> temp;
		if (!cin)   // bad input
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input: input process terminated.\n";
			break;
		}
		else if (temp < 0)
			break;
		ar[i] = temp;
	}
	return i;
}