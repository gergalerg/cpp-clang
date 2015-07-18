#include <iostream>
#include <thread>
#include <chrono>

void foo() 
{
    // simulate expensive operation
    std::this_thread::sleep_for(std::chrono::seconds(1));
}

void bar()
{
    std::this_thread::sleep_for(std::chrono::seconds(1));
}


int main()
{
    std::cout << "Starting first helper....\n";
    std::thread helper1(foo);

    std::cout << "Starting second helper....\n";
    std::thread helper2(bar);

    std::cout << "Waiting for helpers to finish..." << std::endl;
    helper1.join();
    helper2.join();

    std::cout << "done!\n";
}