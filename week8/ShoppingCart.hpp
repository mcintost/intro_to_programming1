/*******************************
**Thomas McIntosh
**May 16,2016
**CS_161 This is the header file for the class shopping cart
*******************************/

//ShoppingCart.hpp

#ifndef ShoppingCart_hpp
#define ShoppingCart_hpp

#include "Item.hpp"
#include <string>

class ShoppingCart
{
private:
	Item* itemArray[100];
	int arrayEnd;

public:
	ShoppingCart();
	void addItem(Item *);
	double totalPrice();

};
#endif //ShoppingCart.hpp