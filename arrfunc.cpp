//
#include <iostream>

using namespace std;

int sum(int (*ar2)[4], int size);

int main()
{
	int data[3][4] = {{1,2,3,4}, {9,8,7,6}, {2,4,6,8}};
	char ghost[15] = "galloping";
	cout << ghost << endl;

	return 0;
}

int sum(int ar2[][4], int size)
{
	int total = 0;
	for (int r = 0; r < size; r++)
		for (int c = 0; c < 4; c++)
			total += ar2[r][c];
	return total;
}
