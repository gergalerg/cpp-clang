#include <iostream>

using namespace std;

class Box
{
	private:
		double width;
	public:
		double length;
		void setWidth( double wid );
		double getWidth( void );
		double getArea(void);
};

// Member functions definitions
double Box::getWidth( void )
{
	return width;
}

void Box::setWidth( double wid )
{
	width = wid;
}

double Box::getArea(void)
{
	return width * length;
}

int main() 
{
	Box box;
	box.length = 10.0;
	box.setWidth(10.0);
	cout << "Width of box " << box.getWidth() << endl;
	cout << "Area of box " << box.getArea() << endl;
	return 0;
}