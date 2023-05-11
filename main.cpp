#include <iostream>
#include "CarClass.hpp"

using namespace std;

int main()
{
	SportCar c1("Audi", "A8", 2018);
	c1.Drive(15);
	c1.Info();

	SportCar c2("Tesla", "XS", 2022);
	c2.Drive(20);
	c2.Info();
}