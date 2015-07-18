#include <iostream>
#include <vector>

using namespace std;

int main() 
{
	vector<int> myIntVector;
	vector<int>::iterator myIntVectorIterator;

	myIntVector.push_back(1);
	myIntVector.push_back(4);
	myIntVector.push_back(8);
	for (myIntVectorIterator = myIntVector.begin();
		myIntVectorIterator != myIntVector.end();
		myIntVectorIterator++)
	{
		cout << *myIntVectorIterator<< " ";
	}
	return 0;

}