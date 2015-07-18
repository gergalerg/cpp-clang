// practice1.cpp
#include <iostream>
int sum(int (*ar2)[4], int size);
int main() 
{
	using namespace std;

	char ghost[15] = "galloping";
	char * str = "galumphing";
	cout << ghost << endl;
	cout << sizeof(str) << endl;

	return 	0;
}


int sum(int ar2[][4], int size)
{
	int total = 0;
	for (int r = 0; r < size; r++)
		for (int c = 0; c < 4; c++)
			total += ar2[r][c];
	return total;
}

