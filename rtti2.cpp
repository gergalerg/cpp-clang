#include <iostream>
#include <cstdlib>
#include <ctime>
#include <typeinfo>
using namespace std;

class Grand
{
private:
    int hold;
public:
    Grand(int h = 0) : hold(h) {}
    virtual void Speak() const { cout << "I am a grand class!\n"; }
    virtual int Value() const { return hold; }
};

class Superb : public Grand
{
public:
    Superb(int h = 0) : Grand(h) {}
    void Speak() const { cout << "I am a superb class!!\n"; }
    virtual void Say() const
            { cout << "I hold the superb value of " << Value() << "!\n"; }
};

class Magnificent : public Superb
{
private:
    char ch;
public:
    Magnificent(int h = 0, char cv = 'A') : Superb(h), ch(cv) {}
    void Speak() const { cout << "I am a magnificent class!\n"; }
    void Say() const { cout << "I hold the character " << ch << 
                        " and the int " << Value() << "!\n"; }
};

Grand * GetOne()
{
    Grand * p;
    switch( rand() % 3)
    { 
        case 0: p = new Grand(rand() % 100);
            break;
        case 1: p = new Superb(rand() % 100);
            break;
        case 2: p  = new Magnificent(rand() % 100, 'A' + rand() % 26);
            break;
    }
    return p;
}

int main()
{
    srand(time(0));
    Grand * pg;
    Grand ps;
    for (int i = 0; i < 5; i++)
    {
        pg = GetOne();
        pg->Speak();
        cout << typeid(*pg).name() << endl;
        cout << endl;
        ps.Speak();
        Superb ps1(3);
        ps1.Say();

        //ps = GetOne();
        //ps = GetOne();
        //ps->Speak();
    }
    //ps = GetOne();
}
