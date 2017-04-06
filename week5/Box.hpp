/*******************************
**Thomas McIntosh
**April 27,2016
**CS_161 This is the header file for the program that will take the dimensions of a box and return the user with the length, volume, and surface area.
*******************************/

/*Box Class Program */
#ifndef BOX_hpp
#define BOX_hpp

class Box // class header section
{

private:
	double length;
	double height;
	double width;


public:
	Box();
	Box(double, double, double);           
	void setLength(double);
	void setHeight(double);
	void setWidth(double);
	double getVolume();
	double getSurfaceArea();

};
#endif

