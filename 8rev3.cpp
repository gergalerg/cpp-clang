#include <iostream>

using namespace std;

void iquote(int a);
void iquote(char a);
void iquote(double a);

int main() 
{
	int myint = 3;
	char mychar = 'w';
	double mydouble = 34;

	iquote(myint);
	iquote(mychar);
	iquote(mydouble);
}

void iquote(int a)
{
	cout << "My int is: " << a << endl;

}

void iquote(char a)
{
	cout << "My char is: " << a << endl;
}

void iquote(double a)
{
	cout << "My double is: " << a << endl;
}

