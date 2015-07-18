// use_new.cpp using the new operator
#include <iostream>

int main()
{
    using namespace std;
    int nights = 1001;
    int * pt = new int; // allocate space for pt 
    *pt = 1001;

    cout << "nights value = " << nights << " location " << &nights << endl;
    cout << "int value = " << *pt << " location = " << pt << endl;

    double * pd = new double; // allocate space for a double
    *pd = 10000001.0; // store a value there.

    cout << "double value = " << *pd << " location = " << pd << endl;
    cout << "Location of pointer pd " << &pd << endl;
    cout << "sizeof pt = " << sizeof(pt) <<"sizeof *pt = " << sizeof(*pt) << endl;

    delete pd, pt;
    
    cout << "double value = " << *pd << " location = " << pd << endl;
    cout << "Location of pointer pd " << &pd << endl;
    cout << "sizeof pt = " << sizeof(pt) <<"sizeof *pt = " << sizeof(*pt) << endl;
    return 0;

}