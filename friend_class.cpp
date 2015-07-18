//friend function example
#include <iostream>
using namespace std;

class Box
{
public:
	int width;
	int setWidth(int wid)
	{
		this->width = wid;
	}
	void printwidth( Box box )
	{
		cout << this->width << endl;

	}
	// friend void printWidth( Box box );
	// void setWidth( double wid );
};

/* Member function definition
void Box::setWidth( double wid )
{
	width = wid;
}
*/
void printWidth( Box box )
{
	/// Because setWidth() is a friend of Box,  
	// it can directly access any member of this class
	cout << "Width of box " << box.width << endl; 
}


int main() 
{
	Box box;

	box.setWidth(15);

	//use friend function to print the width
	printWidth( box );

	return 0;
}