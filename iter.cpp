#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<int> myIntVector;
    myIntVector.push_back(1);
    myIntVector.push_back(3);
    myIntVector.push_back(5);
    myIntVector.push_back(8);
    for (int y = 0; y < myIntVector.size(); y++) 
    {
        std::cout << myIntVector[y] << " ";
    }
    std::cout << '\n';

    std::vector<int>::iterator myIntVectorIterator;

    for (myIntVectorIterator = myIntVector.begin();
            myIntVectorIterator != myIntVector.end();
            myIntVectorIterator++)
    {
        std::cout << *myIntVectorIterator << " ";
    }

    std::cout << std::endl;


}