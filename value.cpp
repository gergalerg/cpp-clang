#include <iostream>

using namespace std;
void swap(int x, int y);

int main()
{
	int a = 100;
	int b = 200;
	int c= 300;

	cout << "Before swap, value of a: " << a << "B: " << b << endl;

	swap(a, b);
	swap(a,c);

	cout << "After swap, value of a: " << a << "B: " << b << endl;
	cout << "After swap, value of a: " << a << "C: " << c << endl;
	return 0;
}

void swap(int x, int y)
{
	int tmp;

	tmp = x;
	x = y;
	cout << "a inside function = " << x << endl;
	cout << "b inside function = " << y << endl;
	y = tmp;
	cout << "tmp inside function = " << tmp << endl;

	return;
}
