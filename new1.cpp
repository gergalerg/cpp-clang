#include <iostream>
struct things
{
	int good;
	int bad;
};

things grubnose = {3, 453};
things * pt = &grubnose;
int main() {
	std::cout << grubnose.good << " " << grubnose.bad << std::endl;
	std::cout << pt -> good <<  " " << pt -> bad << std::endl;
	std::cout << "Address &pt: " << &pt << std::endl;
	std::cout << "Address pt: " << (*pt).good << std::endl;
	return 0;
};
