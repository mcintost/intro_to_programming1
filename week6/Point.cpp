/*******************************
**Thomas McIntosh
**May 4,2016
**CS_161 This is a class file that takes 2 points and returns the length
*******************************/


//Point.cpp

#include "Point.hpp"
#include <cmath>

Point::Point()
{
	setXCoord(0);
	setYCoord(0);
}

Point::Point(double xIn, double yIn)
{
	setXCoord(xIn);
	setYCoord(yIn);
}
 
void Point::setXCoord(double xIn)
{
	xCoord = xIn;
}

void Point::setYCoord(double yIn)

{
	yCoord = yIn;
}

double Point::getXCoord()
{
	return xCoord;
}

double Point::getYCoord()
{
	return yCoord;
}

double Point::distanceTo(Point point)
{
	double xDiff = xCoord - point.getXCoord();
	double yDiff = yCoord - point.getYCoord();
	return sqrt((xDiff * xDiff) + (yDiff * yDiff));
}
