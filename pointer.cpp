// pointer.cpp
#include <iostream>
int main()
{
    using namespace std;
    int updates = 6;
    int * p_updates;
    p_updates = &updates;

    cout << "Values: \tupdates = " << updates << endl;
    cout << "\t\t\t*p_updates = " << *p_updates << endl;

    cout << "Addresses: &updates = " << &updates << endl;
    cout << "p_updates = " << p_updates << endl;


    cout << "Addres p_updates = " << &p_updates << endl;

    *p_updates = *p_updates + 1;
    cout << "Now updates = " << updates << endl;


    return 0;
}