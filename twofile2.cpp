// twofile2.cpp -- variables with internal and external linkage
#include <iostream>
extern int tom;
static int dick = 10; // overrides external dick
int harry = 200; // external variable definition;
                    // no conflict with twofile1 harry

void remote_access()
{
    using namespace std;
    cout << "remote_access() reports the following addresses:\n";
    cout << &tom << " = &tom, " << endl << &dick << " = &dick, " 
        << endl << &harry << " = &harry\n";
}