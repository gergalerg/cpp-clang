#include <iostream>
#include <string>

struct job
{
    char name[40];
    double salary;
    int floor;
};


template <typename T>
void Swap(T &, T &);

template <> void Swap<job>(job &, job &);

template <typename T>
void Show(T &, T &);

void Show(job &);

int main()
{
    using namespace std;
    cout.precision(2);
    cout.setf(ios::fixed, ios::floatfield);
    double i = 10.0, j = 20.0;


    job sue = {"Susan Yaffee", 73000.00, 7};
    job andy = {"Andy Dwyer", 23000.00, 2};
    Show(sue);
    Show(andy);
    Swap(sue, andy);
    Show(sue);
    Show(andy);

    return 0;
}

template <typename T>
void Swap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

// swaps just the salary and floor fields of a job structure

template <> void Swap<job>(job &j1, job &j2)
{
    double t1;
    int t2;
    t1 = j1.salary;
    j1.salary = j2.salary;
    j2.salary =  t1;
    t2 = j1.floor;
    j1.floor = j2.floor;
    j2.floor = t2;
}

template <typename T>
void Show(T &a,  T &b)
{
    using namespace std;
    cout << "First = " << a 
        << " Second = " << b << endl; 
}
void Show(job &j)
{
    using namespace std;
    cout << j.name << ": $" << j.salary
        << " on floor " << j.floor << endl;
}