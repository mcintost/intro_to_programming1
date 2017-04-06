/*******************************
**Thomas McIntosh
**May 4,2016
**CS_161 This is the header file for a class that takes 2 points and returns the length 
*******************************/

//Point.hpp

#ifndef Point_hpp
#define Point_hpp

class Point
{
private:
	
	double xCoord;
	double yCoord;

public: 
	Point();
	Point(double, double);
	void setXCoord(double);
	void setYCoord(double);
	double getXCoord();
	double getYCoord();
	double distanceTo(Point);
};

#endif // Point.hpp