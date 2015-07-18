// using declaration1.cpp
#include <stdio.h>
class B {
public:
    void f(char) {
        printf("in B::f()\n");
    }

    void g(char) {
        printf("in B::g()\n");
    }
};

class D : B {
public:
    using B::f;
    using B::g;
    void f(int) {
        printf("In D::f()\n");
        f('c');
    }

    void g(int) {
        printf("in D::g()\n");
        g('c');
    }
};

int main()
{
    D myD;
    myD.f(1);
    myD.g('a');
}