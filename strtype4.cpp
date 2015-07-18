#include <iostream>
#include <string>
#include <cstring>
int main()
{
	using namespace std;
	char charr[20];
	string str;

	cout << "Length of strig before input: "
		<< strlen(charr) << endl;
	cout << "Length of string in str before input: "
		<< str.size() << endl;
	cout << "enter a line of text:\n";
	cin.getline(charr, 20);
	cout << "You enterered: " << charr << endl;
	cout << "Enter another line of text:\n";
	getline(cin, str);
	cout << "You entered: " << str << endl;
	cout << "Lenght of string charr after input: "
		<< strlen(charr) << endl;
	cout << "Length of strin gin str after input: "
		<< str.size() << endl;

	return 0;
}
