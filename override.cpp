#include <iostream>
#include <string>

struct SmartPtr {
    int mCopiesMade;
    int getCopies() const { return mCopiesMade; }
};

void f1(const std::string& s) { std::cout << "By reference: " <<  s << std::endl; }

void f1(const std::string* sptr) { std::cout << "By pointer: " <<  *sptr << std::endl; }

void f3(std::string s) { int x = std::stoi(s); std::cout << "By value: " << x  << std::endl; }

void g1(std::string& s) { std::cout << s << std::endl; }
 
struct X {
    int id;
    X (int s) : id(s) {}
    void inspect () const { std::cout << "id is: " << id << std::endl; }
    void mutate () { id++; }
};


int main()
{
    X a(3);
    X b = a;
    X* const p;
    p = &a;
    p->inspect();
    p->mutate();
    p->inspect();
    std::cout << std::endl;
    a.inspect();
    b.inspect();
    return 0;
}