#include <iostream>

template <class T>
T Add(T a, T b)
{
    return a + b;
};

struct blot 
{
    int a; 
    char b[10];
};

template <class Type>
void recycle (Type t)
{
    std::cout << "*******\n" << t.b << '\n' <<  t.a << "\n*******" <<std::endl;
}

template <> void recycle<blot> (blot &t); 

int main()
{
    int i =10, j = 20;
    double t = 11.1;
    double x= 10.2;

    int result = Add<double>(t, x);

    blot ink = {25, "spots"};

    recycle(ink);


    std::cout << result << std::endl;
}

template <> void recycle<blot> (blot &t)
{
    std::cout << "//////////" << t.b << "\n" << t.a << "\n/////////" << std::endl;
}
