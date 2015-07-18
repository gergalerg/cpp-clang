#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	time_t now = time(0);

	char * dt = ctime(&now);

	cout << "The local date and time is: " << dt << endl;
	cout << "Hoopty utc: " << asctime(gmtime(&now)) << endl;

	tm * gmtm = gmtime(&now);
	dt = asctime(gmtm);
	cout << "The UTC date and times; " << dt << endl;

	return 0;
}