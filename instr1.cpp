// instrl.cpp reading more than one string
#include <iostream>
int main()
{
    using namespace std;
    const int ArSize  = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";
    cin.get(name, ArSize); 
    cout << " Enter your favorite dessert:\n";
    cin.get();
    cin.get(dessert,ArSize);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    return 0;
}