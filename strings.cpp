// strings.cpp -- storing strings in an array
#include <iostream>
#include <cstring> // For the strlne() function
int main()
{
    using namespace std;
    const int Size = 15;
    char name1[Size];           // Empty array
    char name2[Size] = "C++owboy"; // Initialized array

    cout << "Howdy I'm " << name2;
    cout << "! What's your name\n";
    cin >> name1;
    cout << "Well, " << name1 << ", your name has ";
    cout << strlen(name1) << " letters and is stored\n";
    cout << "in an array of " << sizeof(name1) << " bytes.\n";
    cout << "your initial is " << name1[0] << ".\n";
    name1[3] = '\0';
    cout << "Here are the first three characters of my name: ";
    cout << name1 << endl;
    return 0;
}