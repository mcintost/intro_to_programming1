/*******************************
**Thomas McIntosh
**April 27,2016
**CS_161 This is a program that will allow a person to make withdrawls and deposits in a bank account. //Header file
*******************************/

#ifndef BankAccount_hpp
#define BankAccount_hpp

#include <string>

//Defines the class BankAccount
class BankAccount
{
private: 
	double balance;

public:
	BankAccount(std::string, std::string, double);
	std::string getCustomerName();
	std::string getCustomerID();
	double getCustomerBalance(); 
	void withdraw(double);
	void deposit(double);

};
#endif
