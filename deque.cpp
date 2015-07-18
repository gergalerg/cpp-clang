// deque::push_back
#include <iostream>
#include <deque>
using namespace std;

int main()
{
	deque<int> mydeque;
	int myint;

	cout << "PLease enter some integers (enter 0 to end):\n";

	do {
		cin >> myint;
		mydeque.push_back (myint);
	} while (myint);

	cout << "mydeque stores " <<  mydeque.size() << " numbers.\n";

	return 0;
}