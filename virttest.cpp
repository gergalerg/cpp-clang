#include <iostream>
#include <string>

struct Entity {
    friend struct Remote;
    int mode;
    enum {Antenna, Cable };
    void set_mode() { mode = (mode == Antenna) ? Cable : Antenna; }
    void show_mode() { std::cout << "Mode is " << mode << std::endl;}
};

struct Remote {
    int mode;
    Remote(int m = Entity::Antenna) : mode(m) {}
};



int main()
{
    Entity myent;
    myent.set_mode(); 
    myent.show_mode();
    myent.set_mode();
    myent.show_mode();
    return 0;
}