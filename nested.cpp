// nested.cpp --- nested loops and 2-D array
#include <iostream>
const int Cities = 5;
const int Years = 4;
int main()
{
	using namespace std;
	const char * cities[5] =
	{
		"Gribble City", 	// Array of pointers 
		"Gribbletown",  	// to 5 strings
		"New Gribble",
		"San Gribble",
		"Gribble Vista"
	};

	int maxtemps[Years][Cities] = 	// 2-D Array
	{
		{97,100,87, 101, 105},
		{96, 98, 107, 104, 91},
		{97, 101, 83, 108, 107},
		{98, 103, 95, 109, 108}
	};

	cout << "Maximum temps for 2008-2011\n\n";
	for (int city = 0; city < Cities; ++city)
	{
		cout << cities[city] << ":\t";
		for (int year = 0; year < Years; ++year)
			cout << maxtemps[year][city] << "\t";
		cout << endl;
	}
	return 0;
}