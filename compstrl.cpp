// compstrl.cpp -- comparing string using arrays
#include <iostream>
#include <cstring>
#include <string>
int main()
{
	using namespace std;
	char word1[10] = "bate";
	char word2[10] = "mate";

	for (char ch = 'a'; strcmp(word1, word2); ch++)
	{
		cout << word1 << endl;
		word1[0] = ch;
	}
	cout << "After loop ends, word is " << word1 << endl;
	return 0;
}