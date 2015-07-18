// book.cpp
#include <iostream>

int main()
{
    int sum = 0, val = 10;

    while (val > 0)
    {
        std::cout << val << std::endl;
        --val;
    }

    std::cout << "Please enter two digits:\n";
    std::cin >> sum >> val;

    std::cout << sum << std::endl;
    std::cout << val << std::endl;

    while (sum <= val)
    {
        std::cout << sum << std::endl;
        sum++;
    }




    return 0;
}