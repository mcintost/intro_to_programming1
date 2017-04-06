#include<iostream>

#include<string>

#include<iomanip>

#include<vector>
#include "Patron.hpp"

using namespace std;


Patron::Patron(string idVal, string n)

{

	idNum = idVal;

	name = n;

}

string Patron::getIdNum()

{

	return idNum;

}

string Patron::getName()

{

	return name;

}

vector<Book *> Patron::getCheckedOutBooks()

{

	return checkedOutBooks;

}

void Patron::addBook(Book* b1)

{

	checkedOutBooks.push_back(b1);

}

void Patron::removeBook(Book* b1)

{

	for (int k1 = 0; k1 < checkedOutBooks.size(); ++k1)

	{

		if (checkedOutBooks[k1] == b1)

		{

			checkedOutBooks.erase(checkedOutBooks.begin() + k1);

			break;

		}

	}

}

double Patron::getFineAmount()

{

	return fineAmount;

}

void Patron::amendFine(double amount)

{

	fineAmount = fineAmount + amount;

}