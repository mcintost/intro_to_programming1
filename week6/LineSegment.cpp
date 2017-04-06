/*******************************
**Thomas McIntosh
**May 4,2016
**CS_161 This is the class file that takes 2 points and returns the length and slope using the Point class
*******************************/


//LineSegment.cpp

#include "LineSegment.hpp"
#include <cmath>

LineSegment::LineSegment(Point point1In, Point point2In)
{
		setEnd1(point1In);
		setEnd2(point2In);
}

void LineSegment::setEnd1(Point point1In)
{
	p1 = point1In;
}

void LineSegment::setEnd2(Point point2In)
{
	p2 = point2In;
}

Point LineSegment::getEnd1()
{
	return p1;
}

Point LineSegment::getEnd2()
{
	return p2;
}

double LineSegment::length()
{
	return p1.distanceTo(p2);
}

double LineSegment::slope()
{
	return (p2.getYCoord() - p1.getYCoord()) / (p2.getXCoord() - p1.getXCoord());
}