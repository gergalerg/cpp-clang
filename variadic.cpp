#include <iostream>
#include <atomic>
#include <string>

void show_list3() {}

template <typename T>
void show_list3(const T& value)
{
    std::cout << value << '\n';
}

template <typename T, typename... Args>
void show_list3(const T& value, const Args&... args)
{
    std::cout << value << ",\t";
    show_list3(args...);
}


int main()
{
    int n = 14;
    double x = 2.7180;
    std::string mr= "Mr. Robinson";
    show_list3(n, x);
    std::cout << std::endl;
    show_list3(x*x, '!', 7, mr);

    std::atomic_int atom1 = 5;

}