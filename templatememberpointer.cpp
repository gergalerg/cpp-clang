#include <iostream>

class Example
{
private:
public:
    int feet;
    int inches;
    //Example(){}
    Example(int ft = 0, int in = 0) : feet(ft), inches(in) {}
    ~Example(){ std::cout << "Object deleted\n"; }
    void show_in() const  { std::cout << "Inches: " << inches << "\n"; }
    void show_ft() const  { std::cout << "Feet: " << feet << "\n"; }
    void use_ptr() const  { std::cout << "Pointer " << &feet << "\n"; }
};

int main()
{ 
    {
    Example ob1;
    Example ob2;
    //Example *pq = new Example(12, 13);
    void (*pf) ();
    pf = &Example::show_in;

    ob1.show_in();
    ob1.show_ft();
    //(ob1.*)
    //std::cout << pq->*pt << std::endl;

}   
    return 0;
}