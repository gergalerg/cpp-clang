// arrayone.cpp -- small arrays of integers
#include <iostream>
int main()
{
    using namespace std;
    short yams[3];        // creates an array with 3 elements
    yams[0] = 7;
    yams[1] = 8;
    yams[2] = 6;

    short yamcosts[3] = {20, 30, 5}; // create, initialize array

    double earnings[4] =  {1.2e4, 1.6e4, 1.7e4};
    cout << "Size of earnings array: " << sizeof earnings << endl;
    cout << earnings[0] << " " << earnings[1] << " " << earnings[2] << endl;

    cout << "Total yams = ";
    cout << yams[0] + yams[1] + yams[2] << endl;
    cout << "The package with " << yams[1] << " yams costs ";
    cout << yamcosts[1] << " cents per yam \n";
    int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
    total += yams[2] * yamcosts[2];
    cout << "The total yam expense " << total << " cents.\n";

    cout << "\nSize of yams array = " << sizeof yams;
    cout << " bytes\n";
    cout << "Size of one element = "  << sizeof yams[0];
    cout << " bytes.\n";
    char dog[8] = {'f', 'a', 't', 'e', 's', 's', 'a', '\0'};
    char dog1[8] = {'f', 'a', 't', 'e', 's', 's', 'a'};
    cout << "dog: " << dog << "sizeof: dog " << sizeof dog << endl;
    cout << "sizeof dog1: " << sizeof dog1 << endl;
    char shirt_size = 'S';
    cout << "Shirt_size: " << shirt_size << endl;
    return 0;
}
