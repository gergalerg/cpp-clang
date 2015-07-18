#include <iostream>

using namespace std;

class Line
{
public:
	void setLength( double len);
	double getLength(void);
	Line(double len); //This is the constructor

private:
	double length;
};

//Member functions definitions including constructor
Line::Line(double len): length(len)
{
	cout << "OBject is being created. Length = " << len << endl;
}

void Line::setLength(double len)
{
	length = len;
}

double Line::getLength(void)
{
	return length;
}

//Main function for the program
int main()
{
	Line line(10.0);

	//set line length
	line.setLength(5.0);
	cout << "LEngth of line: " << line.getLength() << endl;

	return 0;
}