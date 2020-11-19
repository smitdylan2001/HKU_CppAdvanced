#include "BankAccount.h"

BankAccount::BankAccount(std::string name, int number, long balance)
{
	ownerName = name;
	bankNumber = number;
	this->balance = balance;
	log.reserve(20);
	
}

BankAccount BankAccount::operator+(const Transaction& t) const
{
	return BankAccount(ownerName, bankNumber, balance + t.value);
}

BankAccount BankAccount::operator-(const Transaction& t) const
{
	return BankAccount(ownerName, bankNumber, balance - t.value);
}
