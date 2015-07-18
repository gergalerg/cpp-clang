#include <iostream>

class Shape
{
protected:
    float l;
public:
    void get_data() { std::cin >> l; }
    virtual float area() = 0;
};

class Square : public Shape
{
public:
    float area() { return l * l; }
};

class Circle : public Shape
{
public:
    float area() { return 3.14 * l * l; }
};

int main()
{
    Square s;
    Circle c;
    std::cout << "Enter a length to calculate area of a square: ";
    s.get_data();
    std::cout << "Area of square: " << s.area();
    std::cout << "\nEnter radius to calculate area of a circle: ";
    c.get_data();
    std::cout << "Area of a circle: " << c.area();
    std::cout << std::endl;
    return 0;
}