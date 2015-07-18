#include <iostream>
#include <cstring>
int main()
{
	using namespace std;

	char word[5] = "mate";
	char word2[5] = "mAsf";

	cout << strcmp(word, word2) << endl;
	return 0;
}