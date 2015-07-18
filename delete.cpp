// delete.cpp -- using the delete operator
#include <iostream>
#include <cstring>
using namespace std;
char * getname(void);
int main()
{
    char * name; // create pointer but no storage

    name = getname();
    cout << name << " at " << (int *) name << "\n";
    delete [] name; // memory freed

    name = getname();  // reuse freed memory
    cout << name << " at " << (int *) name << "\n";
    delete [] name; // memory freed again
    return 0;
}

char * getname() // return pointer to new string
{
    char temp[80];   // temp storage
    cout << "Enter last name: ";
    cin >> temp;
    char * pn = new char[strlen(temp) + 1];
    strcpy(pn, temp);  // copy string into smaller space

    return pn;
}