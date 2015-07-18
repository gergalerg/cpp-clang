#include <iostream>
#include <string>
#include <cmath>

struct free_throws {
    int points;
    double percentage;
    std::string name;
    int pfd[2];
};

const free_throws & clone(free_throws & ft){
    free_throws & pt = ft;
    return pt;
}

void Show(const free_throws &ft) {
    std::cout << ft.name << "\t" << ft.points << "\t" << ft.percentage << "\n";
}
int main()
{  

    free_throws Angels = {10, 88.8, "Angels"};
    free_throws &nice = Angels;
    const free_throws &Doobers = clone(nice);
    Angels.points = 20;
    Show(Angels);
    Show(nice);
    Show(Doobers);
    return 0;
}