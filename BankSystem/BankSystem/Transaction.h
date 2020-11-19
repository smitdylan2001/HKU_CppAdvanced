#pragma once
#include <string>

class Transaction
{
public:
	Transaction(long value);
	virtual ~Transaction();
	long value;
	std::string date;


private:



};

