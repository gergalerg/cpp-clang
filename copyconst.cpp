#include <iostream>
#include <typeinfo>
#include <type_traits>

typedef unsigned long Item;

struct A {
    int n;
    A(int n = 1) : n(n) {}
    A(const A& a) : n(a.n) { n++;} // user-defined copy ctor
    void Show() { std::cout << "N is  " << n << std::endl;}
};

struct B : public A {
    // implicit default ctor B::B()
    // implicit copy ctor B::B(const B&)
};

struct C : B {
    C() : B() {}
private: 
    C(const C&);  // non-copiable C++98 style
};
typedef typename std::remove_reference<int>::type TR;

int main()
{
    A a1(7);
    A a2(a1); // calls the copy ctor
    B b;
    B b2 = b;
    A a3 = b; // conversion to A& and copy ctor
    a3.Show();
    volatile A va(10);
    C c1; 
    c1.Show();
    unsigned long s = 5;
    std::cout << typeid(TR).name();




}