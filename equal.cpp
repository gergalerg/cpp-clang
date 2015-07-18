// equal.cpp --- equality v assignment
#include <iostream>
int main()
{

	using namespace std;
	int quizscores[10] = 
		{ 20, 20, 20, 19, 20, 18, 20, 20};

	cout << "Doing it right:\n";
	for (int i = 0; quizscores[i] == 20; i++)
		cout << "quiz " << i << " is a 20\n";

	char big[80] = "Daffy";
	char little[6] = "Daffy";

}