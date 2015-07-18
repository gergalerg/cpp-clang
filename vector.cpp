#include <iostream>
#include <vector>

using namespace std;
int main()
{
	vector <int> example;   // vector to store integers
	example.push_back(3); 	// add 3 onto the vector
	example.push_back(10);  // add 10 to the end
	example.push_back(33);	// add 33 to the end
	for (int x = 0; x < example.size(); x++)
	{
		cout << example[x] << " ";
	}
	vector <int> another_vector;
	another_vector.push_back(3);
	another_vector.push_back(10);
	another_vector.push_back(33);
	cout << endl;
	for (int t = 0; t < example.size(); t++)
	{
		cout << &example[t] << endl;
	}
	if (example==another_vector)
	{
		example.push_back(20);
	}
	for (int x = 0; x < example.size(); x++)
	{
		cout << example[x] << " ";
	}
	cout << endl;
	for (int y= 0; y < another_vector.size(); y++)
		cout << another_vector[y] << " "; 
	cout << endl;
	return 0;
}