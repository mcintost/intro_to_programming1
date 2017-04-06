/*******************************
**Thomas McIntosh
**April 27,2016
**CS_161 This program will allow the user to access a bank account and make withdraws or deposits.
*******************************/

//Implementation File

#include <iostream>
#include "Box.hpp"

using namespace std;

int main()
{
	Box Box1(2, 2, 2);
	cout << Box1.getVolume() << "\n";
	cout << Box1.getSurfaceArea << "\n";
	cout << "the surface area of box1 is: " << Box1.getSurfaceArea() << endl;
}