#include <iostream>

void fprintf(const char* format)
{
    const char* next = format+1;
    std::cout << *format << next;
}

int main()
{
    const char* nudge = "Nudge!";
    fprintf(nudge);
}