// jackandjill.cpp p. 1130
#include <iostream>

using namespace std;

namespace Jill {
    double bucket(double n) { return n; };
    double fetch;
    struct Hill {
        string name;
        int pails;
    };
}

char fetch;
int main()
{ 
    using namespace Jill; // import all namespace names
    Hill Thrill;            // create a type Jill::Hill struct
    double water = bucket(2); // use Jill::bucket();
    double fetch;
    cin >> fetch; // read a value into the local fetch
    cin >> ::fetch; // read a value into the global fetch
    cin >> Jill::fetch;  // read a value into Jill::fetch
    cout << "All Entered" << endl;
}