#include <iostream>
#include <typeinfo>

struct Job
{
    char name[40];
    double salary;
    int floor;
};

//void Swap(Job &, Job &);
typedef int __;

template <typename T>
void Swap(T &, T &);

// explicit spec.
template <>
void Swap<Job>(Job &, Job &);

template <typename T>
void Show(T &);

int main()
{
 Job gardener = {"Herb", 12.95, 3}; Job janitor = {"Sally", 33.33, 9};
    Show(gardener);
    Show(janitor);
    Swap(gardener, janitor);
    Show(gardener);
    Show(janitor);
    std::cout << "Type is : " <<  typeid(gardener).name() << std::endl;
    return 0;
}
 //void Swap(Job & a, Job &b) //{//    Job temp; //    temp = a; //    a = b;
//    b = temp;
//}

template <typename T>
void Swap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

// explicit spec.
template <>
void Swap<Job>(Job &a, Job &b)
{
    //Swap(a.floor, b.floor);
    Swap(a.salary, b.salary);
}

template <typename T>
void Show(T &a)
{
    std::cout << "Name: \t" << a.name << "\tSalary:\t" <<  a.salary << "\tFloor: " << a.floor << std::endl;
}
