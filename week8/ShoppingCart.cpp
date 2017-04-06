/*******************************
**Thomas McIntosh
**May 16,2016
**CS_161 This is the class file shopping cart that can take Items from the Item class place them into an array and total the price of the items in the cart.
*******************************/

//ShoppingCart.cpp

#include "ShoppingCart.hpp"
#include <iostream>

ShoppingCart::ShoppingCart()
{
	for (int i = 0; i < 100; i++)
	{
		itemArray[i] = NULL; // assign each array element to NULL
	}
	arrayEnd = 0;
}

void ShoppingCart::addItem(Item *tItem)
{
	itemArray[arrayEnd] = tItem; //adding each item to array
	arrayEnd++;
}

double ShoppingCart::totalPrice()
{
	double total = 0;
	for (int i = 0; i < arrayEnd;i++) //repeat until end of items array
		total += (itemArray[i] -> getQuantity() *itemArray[i] -> getPrice()); //calling price and quantity by get methods
	return total; //return total
}