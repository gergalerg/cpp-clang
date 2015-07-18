// if.cpp == using the if statemetn
#include <iostream>
int main()
{
	using std::cin; 
	using std::cout;

	char ch;
	int spaces = 0;
	int total = 0;
	cin.get(ch);
	while (ch != '.') // quit at end of sentence
	{
		if (ch == ' ')
			++spaces;
		++total;
		cin.get(ch);
	}
	cout << spaces << " spaces, "  << total;
	cout << " characters total in sentence\n";
	return 0;
}