#include <iostream>
#include <cmath>

using namespace std;

int fingers = 10;
static int one_file = 50;
int x;
int y = 5;
long z = 13 * 13;
double pi = 4.0 * atan(1.0);

int main()
{
    cout << "fingers = " << fingers << endl;
    cout << "one_file = " << one_file << endl;
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
    cout << pi << endl;
    pi = 5.0;
    cout << pi << endl;

    return 0;

}