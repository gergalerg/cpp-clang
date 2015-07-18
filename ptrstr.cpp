// ptrstr.cpp -- using pointers to string
#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    char animal[20] = "bear";
    const char * bird = "wren";
    char * ps; // uninitialized

    ps  = animal;
    cout << animal << " at " << (int *) animal << endl;
    cout << ps << " at " << (int *) ps << endl;
    cout << bird << " at " << (int *) bird << endl;

    cout << strlen(animal) << endl;
    ps = new char[strlen(animal) + 1];
    strcpy(ps, animal);
    cout << ps << " at " << (int *) ps << endl;
    cout << bird << " at " << (int *) bird << endl;



    return 0;
}