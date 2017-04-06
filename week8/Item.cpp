/*******************************
**Thomas McIntosh
**May 16,2016
**CS_161 This is the class file Item that takes the name price and quantity of an item.
*******************************/

//Item.cpp

#include "Item.hpp"

Item::Item()
{
	setName("");
	setPrice(0.0);
	setQuantity(0);
}

Item::Item(std::string nameIn, double priceIn, int quantityIn)
{
	setName(nameIn);
	setPrice(priceIn);
	setQuantity(quantityIn);
}

void Item::setName(std::string nameIn)
{
	name = nameIn;
}

void Item::setPrice(double priceIn)
{
	price = priceIn;
}

void Item::setQuantity(int quantityIn)
{
	quantity = quantityIn;
}

std::string Item::getName()
{
	return name;
}

double Item::getPrice()
{
	return price;
}

int Item::getQuantity()
{
	return quantity;
}