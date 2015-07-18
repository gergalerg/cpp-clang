#include <iostream>
// reference_type_function_arguments.cpp
struct Date
{
    short DayOfWeek;
    short Month;
    short Day;
    short Year;
};

// Create a Julian date of the form DDDYYYY
// from a Gregorian date.
long JulianFromGregorian(Date& GDate)
{
    static int cDaysInMonth[] = {
        31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30,31
    };
    long jDate = 0;
    // Add in days for months already elapsed.
    for (int i = 0; i < GDate.Month -1; i++)
        jDate += cDaysInMonth[i];
    // Add in days for this month.
    jDate += GDate.Day;

    // Check for leap year.
    if (GDate.Year % 100 != 0 && GDate.Year % 4 == 0)
        jDate++;
    // Add in year.
    jDate *= 10000;
    jDate += GDate.Year;

    return jDate;
}

int main() 
{
    Date myDate;
    myDate.Month = 11;
    myDate.Year = 2012;
    myDate.Day = 4;
    std::cout << JulianFromGregorian(myDate);
    std::cout << '\n';
    return 0;
}
