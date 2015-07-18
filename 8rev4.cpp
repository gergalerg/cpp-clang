// test.cpp
#include <iostream>
#include <stdio.h>


using namespace std;


struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void Show(const box & mybox);
void SetVolume(box & mybox);

int main() 
{
	box greg = {"Greg's box", 140.0, 10.0, 1400.0};
	SetVolume(greg);
	Show(greg);
	
	return 0;	
}

void SetVolume(box & mybox)
{
	mybox.volume = mybox.width * mybox.height;
}

void Show(const box & mybox)
{
	double vol;
	vol = mybox.width * mybox.height; 
	cout << mybox.maker << "\n" << mybox.height << endl
	<< mybox.volume << endl;
}