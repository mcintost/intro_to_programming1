/*******************************
**Thomas McIntosh
**May 4,2016
**CS_161 This is the header file for a class that takes 2 points and returns the length and the slope by running it through the Point class
*******************************/


//LineSegment.hpp

#ifndef LineSegment_hpp
#define LineSegment_hpp

#include "Point.hpp"

class LineSegment
{
private:
	Point p1;
	Point p2;

public:
	LineSegment(Point, Point);
	void setEnd1(Point);
	void setEnd2(Point);
	Point getEnd1();
	Point getEnd2();
	double length();
	double slope();
};
#endif