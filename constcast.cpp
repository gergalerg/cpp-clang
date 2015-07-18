#include <iostream>
#include <typeinfo>

#define GET_NAME(n) #n
class High
{
private: 
    int x;
public:
    High(int x1 = 0) : x(x1) {}
    ~High(){}
    virtual void Show() { std::cout << "x is " << x << std::endl; }
};

class Low : public High
{
public:
    Low(int x1 = 0) : High(x1) {}
    ~Low() {}
    void Show() { std::cout << typeid(this).name() << std::endl; High::Show(); }
};

void Swap(int & x, int & y)
{
    x ^= y;
    std::cout << "x ^= y: " << x << " " << y << " " << std::endl;
    y ^= x;
    std::cout << "y ^= x: " << x << " " << y << " " << std::endl;
    x ^= y;
    std::cout << "x ^= y: " << x << " " << y << " " << std::endl;
}
int main()
{
    int x1 = 1;
    int y1 = 1;
    Swap(x1, y1);
    int x2 = 10;
    do {
        std::cout << "x : " << x2 << "\t";
        x2--;
    } while ( x2 > 0);

    std::cout << GET_NAME(p1) << std::endl;

}