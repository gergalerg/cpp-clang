// placenew1.cpp -- new, placement new, no delete
#include <iostream>
#include <string>
#include <new>
using namespace std;

const int BUF = 512;

class JustTesting
{
private:
    string words;
    int number;
public:
    JustTesting(const string & s = "Just Testing", int n = 0);
    ~JustTesting() { cout << words << " destroyed\n";}
    void Show() const { cout << words << ", " << number << endl;}
};

typedef JustTesting Item;
int main()
{
    char * buffer = new char[BUF]; // get a block of memory

    Item *pc5, *pc6;
    JustTesting *pc1, *pc2;

    pc1 = new (buffer) JustTesting;   // place object in buffer
    pc2 = new JustTesting("Heap1", 20); // place object on heap

    pc5 = new (buffer) Item;
    pc6 = new Item("Heap1", 20);

    cout << "Memory block addresses:\n" << "Buffer: "
        << (void *) buffer << "     heap: " << pc2 << endl;
    cout << "Memory contents:\n";
    cout << pc1 << ": ";
    pc2->Show();

    JustTesting *pc3, *pc4;
    pc3 = new (buffer + sizeof (JustTesting)) JustTesting("Better Idea", 6);
    pc4 = new JustTesting("Heap2", 10);


    cout << "Memory contents:\n";
    cout << pc3 << ": ";
    pc3->Show();
    cout << pc4 << ": ";
    pc4->Show();

    delete pc2;
    delete pc4;
    // explicitly destry placement new objects
    pc3->~JustTesting();
    pc1->~JustTesting();
    delete [] buffer;
    cout << "Done\n";
    return 0;

}

JustTesting::JustTesting(const string & s, int n)
{
    words = s; 
    number = n; 
    cout << words << " constructed\n";
}
