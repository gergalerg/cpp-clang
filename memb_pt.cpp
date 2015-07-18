#include <iostream>
using namespace std;

template <typename T>
class Example
{
private:
    T feet;
    T inches;
public:
    Example() {feet = 0.0; inches = 0.0;}
    explicit Example(T ft= 0.0) : feet(ft) { inches = 12 * ft;}
    ~Example() {}
    void show_in() const { cout << inches << " inches\n" << endl; }
    void show_ft() const { cout << feet << " feet\n" << endl; }
    void use_ptr() const;
};

template <typename T>
void Example<T>::use_ptr() const
{
    Example<T> yard = 3;
    Example<T>  meter = 3.2;
    int Example<T>::*pt;
    pt = &Example<T>::inches;
    cout << "Set pt to &Example::inches:\n";
    cout << "this->pt: " << this->*pt << endl;
    cout << "yard.*pt: " << yard.*pt << endl;
    cout << "Meter.*pt: " << meter.*pt << endl;
    void (Example<T>::*pf) () const;
    pf = &Example<T>::show_in;
    cout << "Set pf to &Example::show_in:\n";
    cout << "Using (this->*pf)(): ";
    (this->*pf)();
    cout << "Using (yard.*pf)(): ";
    (yard.*pf)();
}
int main()
{
    Example<int> car = 15;
    Example<int>  van = 20;
    //Example<double> garage;

    cout << "car.use_ptr() output:\n";
    car.use_ptr();
    cout << "\nvan.use_ptr() output:\n";
    van.use_ptr();
    return 0;
}

