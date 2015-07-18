// forstr1.cpp 
#include <iostream>
#include <string>
int main()
{
	using namespace std;
	// cout << "Enter a word: ";
	string word;
	word = "looper";
	int my_int =  word.size(); 
	cout << "size of  my_int " << my_int << endl;
	int * p3 = new int [my_int];
	cout << "size of p3 " << * p3 << endl;
	for (int i = word.size() - 1; i >= 0; i--)
		p3[i] = word[i];
	cout << p3[0]  << endl;
	delete [] p3;
	return 0;
}