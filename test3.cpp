#include <iostream>
#include <string>

class Entry {
    int ip;
    std::string name;
public:
    Entry(int m_ip, std::string name_p ) : ip(m_ip), name(name_p){};
    ~Entry() {}
    friend void Print(Entry &);
    void Show()  { std::cout << "This is show for " << name << "\nname: " << name << "\tid:\t:" << ip << "\n"; }
    void ThisShow() { std::cout << "Pointer this\nname: " << this->name << "\tid:\t:" << this->ip << "\n"; }
    void Trade(Entry &);

};


int main()
{
    Entry first(1, "first");
    Entry second(2, "second");
    Entry third(3, "third");
    third.Show();
    std::cout << "\n\n";
    third.Trade(second);
    std::cout << "\n\nThis is after trade\n\n";
    second.Show();
    third.Show();

}

void Print(Entry & et) { std::cout << "name:" << et.name  <<
                        "\tid:\t:" << et.ip << "\n"; }

void Entry::Trade(Entry & et) { std::cout << "THis is Entry::Trade()\n";
                                this->name = et.name;
                                this->ip  = et.ip; }
