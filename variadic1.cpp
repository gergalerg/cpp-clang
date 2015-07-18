// variadic1.cpp -- using recursion to unpack a param pack
#include <iostream>
#include <string>

// definition for 0 params, terminating call
void show_list3() {
}
template <typename T>
void show_list3(const T& value) {
    std::cout << value << "!\n";
}
// definition for 1 or more params
template<typename T, typename... Args>
void show_list3(const T& value, const Args&... args)
{
    std::cout << value << "\t";
    show_list3(args...);
}

int main(){
    show_list3("hello", "how", 123, 54.0, 'l', "Me");
}