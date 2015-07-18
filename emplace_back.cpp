#include <vector>
#include <iostream>
#include <string>

struct President
{
    std::string name;
    std::string country;
    int year;

    President(std::string p_name, std::string p_country, int p_year)
        : name(std::move(p_name)), country(std::move(p_country)), 
        year(p_year)
        {
            std::cout << "I am being constructed.\n";
        }
    President(President&& other)
        : name(std::move(other.name)), country(std::move(other.country)), 
        year(other.year)
        {
            std::cout << "I am being moved.\n";
        }
    //President& operator=(const President& other) = default;
};

int main()
{

    President bill("Bill Clinton", "USA", 1998);
    //President obama = bill;

    std::vector<President> elections;
    std::cout << "emplace_back:\n";
    elections.emplace_back("Nelson Mandela", "South Africa", 1994);

    elections.emplace_back(bill.name, bill.country, bill.year);

    std::vector<President> reElections;
    std::cout << "\npush_back:\n";
    reElections.push_back(President("Franklin Delano Roosevelt", "the USA", 1936));

    std::cout << "\nContents:\n";
    for (President const& president: elections) {
        std::cout << president.name << " was elected president of " 
                    << president.country << " in " << president.year << ".\n";
    }
    for (President const& president: reElections) {
        std::cout << president.name << " was re-elected president of " 
                << president.country << " in " << president.year << ".\n";
    }


}
