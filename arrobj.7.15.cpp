//arrobj.cpp -- functions with array objects
#include <iostream>
#include <array>
#include <string>
// constant data
const int Seasons = 4;
const std::array<std::string, Seasons> Snames = 
	{"Spring", "Summer", "Fall", "Winter"};

// fucntion to modify array object
void fill(std::array<double, Seasons> & pa);

// function that uses array object without modifying it
void show(const std::array<double, Seasons> & da);

int main()
{
	std::array<double, Seasons> expenses;
	fill(expenses);
	show(expenses);
	return 0;
} 

void fill(std::array<double, Seasons> & pa)
{
	for (int i= 0; i < Seasons; i++)
	{
		std::cout << "Enter " << Snames[i] << " expenses: ";
		std::cin >> pa[i];
	}
}

void show(const std::array<double, Seasons> & da)
{
	double total = 0.0;
	std::cout << "\nExpenses\n";
	for (int i = 0; i < Seasons; i++)
	{
		std::cout << Snames[i] << ": $" << da[i] << std::endl;
		total += da[i];
	}
	std::cout << "Total expenses: $" << total << std::endl;
}