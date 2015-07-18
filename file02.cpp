#include <iostream>

extern int cats;
extern int dogs;
static int errors = 4; //known to file02 only

int main()
{
    using namespace std;
    cout << cats << dogs << endl;
    return 0;
}