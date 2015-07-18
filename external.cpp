// external.cpp -- external variables
// compile with support.cpp
#include <iostream>
#include "support.h"

void update(double dt);
void local();

const char * const months[12] = 
{
    "Jan", "Feb", "Mar", "Apr", "May", "Jun",
    "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
};

double warming = 0.8;
using namespace std;
// external variables
// function prototypes

int main()              // uses global variable
{
    cout << "Global warming is " << warming << " degrees.\n";
    update(0.1);         // call function to change warming
    cout << "Global warming is " << warming << " degrees.\n";
    local();
    cout << "Global warming is " << warming << " degrees.\n";
    for (int i = 0; i < 12; i++)
        cout << months[i] << "\t";
    cout << endl;
    cout << fingers << endl << warning << endl;
    return 0;
}