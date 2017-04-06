#include <iostream>
#include "BankAccount.hpp"

int main()
{
	BankAccount account1("Harry Potter", "asd", 1000);
		account1.withdraw(500);
		account1.deposit(300);
		double finalBalance = account1.getCustomerBalance();
}