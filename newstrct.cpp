// newstrct.cpp -- using new with a structure
#include <iostream>
#include <string>

struct inflatable
{
    std::string name;
    float volume;
    double price;
};
int main()
{
    using namespace std;
    inflatable * ps = new inflatable;
    ps->name = "Gerg";
    ps->volume = 10.0;
    ps->price = 39.95;

    cout << ps-> name << " Name " << endl;
    cout << ps->volume << " cubic feet\n";
    cout << ps->price << "$" <<  endl;
    delete ps; // free memeory used by structure

    return 0;
}