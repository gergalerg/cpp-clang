#include <iostream>
#include <typeinfo>
#include <ctime>

struct Data
{
    double * data[200];
};

struct Junk
{
    int junk[100];
};

int main()
{
    std::srand(time(0));
    Data d;
    for (int i =0; i < 200; i++)
    {
        int * t;
        t = (int *)(std::rand() % 100);
        double *y  = dynamic_cast<double *>(t);
        d.data[i] = y;
    }

    for (auto x : d.data) std::cout << x << "\t";
}