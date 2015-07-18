#include <boost/lambda/lambda.hpp>
#include <iostream>
#include <atomic>
#include <iterator>
#include <algorithm>


struct Counter {
    int value;
    void increment() { ++value; }
    void decrement() { --value; }
    int get() { return value; }
};

struct AtomicCounter {
    std::atomic<int> value;
    void increment() { ++value; }
    void decrement() { --value; }
    int get() { return value.load();}
};

int main() 
{
    //using namespace boost::lambda;
    typedef std::istream_iterator<int> in;

    std::for_each ( in(std::cin), in(), std::cout << (boost::lambda::_1 * 3) << " ");

    return 0;
}