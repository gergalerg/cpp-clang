// stdmove.cpp
#include <iostream>
#include <utility>

// interface
class Useless
{
private:
    int n;      // number of elements
    char * pc;  // pointer to data
    static int ct; // number of objects
    void ShowObject() const;
public:
    Useless();
    explicit Useless(int k);
    Useless(int k, char ch);
    Useless(const Useless & f); // regular copy constructor
    Useless(Useless && f); // move constructor
    ~Useless();
    void ShowData() const;
    void UseShowObject() const;
    Useless operator+(const Useless & f) const;
    Useless & operator=(const Useless & f); // copy assignment
    Useless & operator=(Useless && f); // move assignment
};

int main()
{
    using std::cout;
    {
        Useless one(10, 'x');
        Useless two = one + one; // calls move constructor
        cout << "object one: ";
        one.ShowData();
        cout << "object two: ";
        two.ShowData();
        Useless three, four;
        cout << "three = one\n";
        three = one;             // auto copy assignment
        //cout << "now object three = ";
        //three.ShowData();
        //cout << "and object one = ";
        //one.ShowData();
        //cout << "four = one + two\n";
        //four = one + two; // automatic move assignemnt
        //cout << "now object four = ";
        //four.ShowData();
        //cout << " and object one = ";
        //one.ShowData();
        //one.UseShowObject();
        //two.UseShowObject();
        //three.UseShowObject();
        //four.UseShowObject();
    }
    return 0;
}

// implementation
int Useless::ct = 0;
Useless::Useless()
{
    ++ct;
    n = 0;
    pc = nullptr;
}

Useless::Useless(int k) : n(k)
{
    ++ct;
    pc = new char[n];
}

Useless::Useless(int k, char ch) : n(k)
{
    ++ct;
    pc = new char[n];
    for (int i = 0; i < n; i++)
        pc[i] = ch;
}

Useless::Useless(const Useless & f): n(f.n)
{
    ++ct;
    pc = new char[n];
    for (int i = 0; i < n; i++)
        pc[i] = f.pc[i];
}

Useless::Useless(Useless && f): n(f.n)
{
    ++ct;
    pc = f.pc; // steal address
    f.pc = nullptr; // give old object nothing in return
    f.n = 0;
}

Useless::~Useless()
{
    delete [] pc;
}

Useless & Useless::operator=(const Useless & f) // copy assignmet
{
    std::cout << "Copy assignemnt operator called:\n";
    if (this == &f)
        return *this;
    delete [] pc;
    n = f.n;
    pc = new char[n];
    for (int i = 0; i < n; i++)
        pc[i] = f.pc[i];
    return *this;
}

Useless & Useless::operator=(Useless && f)   // move assignemnt
{
    std::cout << "move assignemnt operator called:\n";
    if (this == &f)
        return *this;
    delete [] pc;
    n = f.n;
    pc = f.pc;
    f.n = 0;
    f.pc = nullptr;
    return *this;
}

Useless Useless::operator+(const Useless & f) const
{
    Useless temp = Useless(n + f.n);
    for (int i = 0; i < n; i++)
        temp.pc[i] = pc[i];
    for (int i = n; i < temp.n; i++)
        temp.pc[i] = f.pc[i - n];
    return temp;
}
void Useless::UseShowObject() const
{
    ShowObject();
}

void Useless::ShowObject() const
{
    std::cout << "Number of elements: " << n << std::endl;
    std::cout << "Number of count: " << ct << std::endl;
    std::cout << " Data address: " << (void *) pc << std::endl;
}

void Useless::ShowData() const
{
    if (n == 0)
        std::cout << "(object empty)";
    else 
        for (int i = 0; i < n; i++)
            std::cout << pc[i];
    std::cout << std::endl;
}

