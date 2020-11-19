#pragma once
#include "Transaction.h"
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

class BankAccount
{
public:
	BankAccount(std::string name, int number, long balance);
	virtual ~BankAccount();
	BankAccount(const BankAccount& other);
	std::vector<int> log;
	std::string getName() const;
	long GetBalance() const;

	BankAccount& operator=(const BankAccount&);

	BankAccount operator+(const Transaction& c2) const;
	BankAccount operator-(const Transaction& c2) const;



private:
	long balance;
	int bankNumber;
	std::string ownerName;
	
};

