/*******************************
**Thomas McIntosh
**May 16,2016
**CS_161 This is the header file for the class Item
*******************************/

//Item.hpp

#ifndef Item_hpp
#define Item_hpp
                                                      
#include <string>

class Item
{
private:
	std::string name;
	double price;
	int quantity;

public:
	Item();
	Item(std::string, double, int);
	void setName(std::string);
	void setPrice(double);
	void setQuantity(int);
	std::string getName();
	double getPrice();
	int getQuantity();
};
#endif //Item.hpp