#include <iostream>

class Date
{
private:
    int mn;
    int dy;
    int yr;
public:
    enum month {JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, 
                SEP, OCT, NOV, DEC};
    Date(month mn, int dy, int yr) : mn(mn), dy(dy), yr(yr) {}
    int getMonth() const { return mn; }
    void setMonth(int mn) { mn = mn; } 
    void getDate() const { std::cout << mn << " " << dy << " " << yr << std::endl; }
};


int main()
{

    Date::month mnt = Date::DEC;
    Date d(mnt,3,15);
    d.getDate();
    return 0;
}