/*******************************
**Thomas McIntosh
**April 27,2016
**CS_161 This is a program that will allow a person to make withdrawls and deposits in a bank account.
*******************************/


#include "BankAccount.hpp"
#include <string>
#include <iostream>

BankAccount::BankAccount(std::string name, std::string id, double balance)
{
	getCustomerName();
	getCustomerID();
	getCustomerBalance();
}

double BankAccount::getCustomerBalance() 
{
	return balance;
}

void BankAccount::withdraw(double moneyOut)
{
	balance = balance - moneyOut;
}

void BankAccount::deposit(double moneyIn)
{
	balance = balance + moneyIn;
}
