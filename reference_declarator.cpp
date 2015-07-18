// reference_declarator.cpp
// demonstrates the reference reference_declarator
#include <iostream>
using namespace std;

struct Person
{
    char * Name;
    short Age;
};

int main()
{
    // Declare a person object.
    Person myFriend;

    // Declare a reference to the Person object.
    Person &rFriend = myFriend;

    // Set the fields of the Person object
    // Updating either variable changes the same object
    myFriend.Name = "Bill";
    rFriend.Age = 40;

    // Print the fields fo the Person object to the console.
    cout << rFriend.Name << " is " << myFriend.Age << endl;
}