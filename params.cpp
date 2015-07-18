#include <iostream>

void tprintf(const char* format) // base function
{
    std::cout << *format;
}

template<typename T,typename... Targs>
void tprintf(const char* format,T value, Targs... Fargs) // recursive variadic function
{
    for ( ; *format != '\0'; format++) {
        if (*format == '%' || *format == ' ') {
            std::cout << value;
            tprintf(format+1, Fargs...); // recursive call
            return;
        }
        std::cout << *format;
    }
}

int main()
{

    const char * saying = "%     world%     %\n";
    tprintf(saying, "Hello", "!", 123);
    return 0;
}