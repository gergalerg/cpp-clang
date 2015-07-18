#include <iostream>
#include <functional>

template <typename T, typename F>
T use_f(T v, F f)
{
    static int count = 0;
    count++;
    std::cout << " use_f count = " << count
            << ", &count = " << &count << std::endl;
    return f(v);

}

class Fp
{
private:
    double z_;
public:
    Fp(double z = 1.0) : z_(z) {}
    double operator() (double p) { return z_ * p; }
};

class Fq
{
private:
    double z_;
public:
    Fq(double z = 1.0): z_(z) {}
    double operator() (double q) { return z_ + q; }
};


double dub(double x) { return 2.0 * x; }
double square(double x) { return x * x; }

typedef std::function<double(double)> fdd;

int main()
{
    double y = 1.21;
    int count  = 0;
    Fp myfp(3);
    Fq myfq(15);
    std::cout << "Functon pointer dub: \n";
    std::cout << " " << use_f(y, fdd(dub)) << std::endl;
    std::cout << std::endl;
    std::cout << "Lamba 1: \n";
    std::cout << " " << use_f(y, fdd([](double u) {  return u * u; })) << std::endl;
    std::cout << " " << use_f(y, [&count](double u) { return u + u/2.0;}) << std::endl;
    std::cout << "Use functor Fp = \n";
    std::cout <<  use_f(y, fdd(myfp)) << std::endl;
    std::cout << "Use functor Fq = \n";
    std::cout <<  use_f(y, fdd(myfq)) << std::endl;



    return 0;
}