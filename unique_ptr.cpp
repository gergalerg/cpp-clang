#include <iostream>
#include <memory>
#include <vector>

struct Foo
{
    Foo() { std::cout << "Foo::Foo\n"; }
    ~Foo() { std::cout << "Foo::~Foo\n"; }
    void bar() { std::cout << "Foo::bar\n"; }
};

void f(const Foo &)
{
    std::cout << "f(const Foo&)\n"; 
}

int main()
{
    std::vector<std::unique_ptr<Foo>> v;
    std::vector<std::unique_ptr<int>> intvec;

    std::unique_ptr<int> i1(new int(3));
    std::unique_ptr<Foo> p1( new Foo);

    intvec.emplace_back(std::move(i1));
    v.emplace_back(std::move(p1));
    std::cout << *intvec[0] << std::endl;

    v[0]->bar();
}