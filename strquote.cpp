// strquote.cpp == different designs
#include <iostream>
#include <string>
using namespace std;
string version1(const string & s1, const string & s2);
const string & version2(string & s1, const string & s2);
const string & version3(string & s1, const string & s2);

int main() 
{
	string input;
	string copy;
	string result;
	input = "Hello!";

	copy = input;
	cout << "Your string as entered: " << input << endl;
	result = version1(input, "***");
	cout << "Your string....changed...do you see?: " << result << endl;
	cout << "Your string....original...do you see?: " << input << endl;

	result = version2(input, "###");
	cout << "Your string....changed...do you see?: " << result << endl;
	cout << "Your string....original...do you see?: " << input << endl;

	cout << "REsetting original string\n";
	input = copy;
	result = version3(input, "@@@");
	cout << "Your string....changed...do you see?: " << result << endl;
	cout << "Your string....original...do you see?: " << input << endl;


	return 0;
}

string version1(const string & s1, const string & s2)
{
	string temp;

	temp = s2 + s1 + s2;
	return temp;
}

const string & version2(string & s1, const string & s2) // has side effect
{
	s1 = s2 + s1 + s2;
	// safe to return reference passed to function
	return s1;
}

const string & version3(string & s1, const string & s2) // bad design
{
	string temp;
	temp = s2 + s1 + s2;
	// unsafe to return reference to local var
	return temp;
}