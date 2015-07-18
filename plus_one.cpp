// plus_one.cpp
#include <iostream>
int main()
{
	using std::cout;
	using std::endl;
	double arr[5] = {21.1, 32.8, 23.4, 45.2, 37.4};
	double *pt = arr;
	int *pa = new int[10];
	pa[0] = 0;
	pa[1] = 1;
	pa[4] = 12;
	pa[9] = 11;
	cout << pa[4] << endl;

	for (int i = 0; i < 10; i++)
		cout << *pa++ << endl;

	cout << *pt << endl;


	return 0;
}