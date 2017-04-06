/*******************************
**Thomas McIntosh
**April 27,2016
**CS_161 This program will take the dimensions of a box and return the user with the length, volume, and surface area.
*******************************/

//Implementation File

#include "Box.hpp"

Box::Box()
{
	setLength(1);
	setHeight(1);
	setWidth(1);
}

Box::Box(double l, double h, double w)
{
	setLength(l) ;
	setHeight(h);
	setWidth(w);
}

void Box::setLength(double l)
{
	length = l; 
}

void Box::setHeight(double h)
{
		height = h;
}

void Box::setWidth(double w)
{
		width = w;
}

double Box::getSurfaceArea() // calculate and return surface area of the box
{
	return 2 * (length * width + length * height + width * height);
}

double Box::getVolume() // calculate and return volume of the box
{
	return (length * width * height);
}

