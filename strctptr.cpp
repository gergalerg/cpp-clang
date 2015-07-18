// strctptr.cpp
#include <iostream>
#include <cmath>

const double Rad_to_deg = 57.29577951;

using namespace std;

// structure templates
struct polar
{
	double distance;  	// distance from origin
	double angle;		// direction from origin
};

struct rect
{
	double x;
	double y;
};

// prototypes
void rect_to_polar(const rect * pxy, polar * pda);
void show_polar(const polar * pda);

int main()
{
	rect rplace;
	polar pplace;

	cout << "Enter the x and y values: ";
	while (cin >> rplace.x >> rplace.y)
	{
		rect_to_polar(&rplace, &pplace);   // pass address
		show_polar(&pplace);				//pass address
		cout << "Next two numbers (q to quit): ";
	}
	cout << "Done.\n";
	return 0;
}

// show polar coordinates converting angle to degrees
void show_polar(const polar * pda)
{

	cout << "distance = " << pda->distance;
	cout << ", angle = " << pda->angle * Rad_to_deg;
	cout << " degrees\n";
}

//convert rectangular to polar coordinates
void rect_to_polar(const rect * pxy, polar * pda)
{
	pda->distance = sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
	pda->angle = atan2(pxy->y, pxy->x);
}