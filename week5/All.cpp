
#include <iostream>
#include <cmath>

using namespace std;

int main() // main function
{
	double l, w, h; // declare dimension variables
	cout << "Box Class " << endl << endl;
	Box A; // instantiate box objects
	cout << "Box A: Enter length, width, height: ";
	cin >> l >> w >> h; // enter dimensions for box A

	cout << "surface area = " << Box.getSurfaceArea() << "\n"; // display box A's surface area
	cout << "volume = " << Box.getVolume() << endl; // display box A's volume
	cout << endl << endl;


	return 0;
}
class Box // class header section
{

private:
	double length;
	double width;
	double height;

public:
	double setHeight;
	double setWidth;
	double setLength;
	double getVolume;
	double getSurfaceArea();

};

void Box::setLength(double l)
{

	if (l >= 0)
		length = l;
	else
		length = 1;
}

void Box::setHeight(double h)
{
	if (h >= 0)
		height = h;
	else
		height = 1;
}

void Box::setWidth(double w)
{
	if (w >= 0)
		width = w;
	else
		width = 1
}

double Box::getSurfaceArea() // calculate and return surface area of the box
{
	return 2 * (length * width + length * height + width * height);
}

double Box::getVolume() // calculate and return volume of the box
{
	return (length * width * height);
}

