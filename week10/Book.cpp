#include<iostream>

#include<string>

#include<iomanip>

#include<vector>
#include "Book.hpp"

using namespace std;


Book::Book(string idc, string t, string a)

{

	idCode = idc;

	title = t;

	author = a;

	location = ON_SHELF;

}

string Book::getIdCode()

{

	return idCode;

}

string Book::getTitle()

{

	return title;

}

string Book::getAuthor()

{

	return author;

}

Locale Book::getLocation()

{

	return location;

}

void Book::setLocation(Locale loc1)

{

	location = loc1;

}

Patron* Book::getCheckedOutBy()

{

	return checkedOutBy;

}

void Book::setCheckedOutBy(Patron* p1)

{

	checkedOutBy = p1;

}

Patron* Book::getRequestedBy()

{

	return requestedBy;

}

void Book::setRequestedBy(Patron* p1)

{

	requestedBy = p1;

}

int Book::getDateCheckedOut()

{

	return dateCheckedOut;

}

void Book::setDateCheckedOut(int d1)

{

	dateCheckedOut = d1;

}

int Book::getCheckOutLength()
{
	return CHECK_OUT_LENGTH;
}