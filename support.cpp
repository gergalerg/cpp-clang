#include <iostream>
#include "support.h"

extern double warming;

using std::cout;
void update(double dt)
{
    warming = dt;
    cout << "Updating global warming to " << warming;
    cout << " degrees.\n";
};

void local()
{
    double warming = 0.8;  // new variable hides external one

    cout << "Local warming = " << warming << " degrees.\n";
        // access global variable with the scope resolution 
        // operator
    cout << "But global warming  = " << ::warming;
    cout << " degrees.\n";

}
