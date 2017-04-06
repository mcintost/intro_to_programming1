/*******************************
**Thomas McIntosh
**April 27,2016
**CS_161 This program will take the dimensions of a box and return the user with the length, volume, and surface area.
*******************************/

/*Box Class Program */
#include <iostream>
#include <cmath>
#include "BOX.hpp"

using namespace std;

int main() // main function
{
 
	Box box1; // instantiate box objects
	double boxLength, boxWidth, boxHeight;

	cout << "Length = ";
	cin >> boxLength;
	cout << "Width = \n";
	cin >> boxWidth;
	cout << "Height =";
	cin >> boxHeight;
	if(box.setLength(setLength) && box.setwidth(setWidth) && box.setHeight(setheight))
	{
		cout << "surface area = " << Box.getSurfaceArea() << "\n"; // display box A's surface area
		cout << "volume = " << Box.getVolume() << endl; // display box A's volume
		cout << endl << endl;
	}

	return 0;
}