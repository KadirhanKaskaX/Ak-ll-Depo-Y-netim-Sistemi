#pragma once
#include <iostream>
#include "Transaction.h"
using namespace std;
class Sales
{
private:
	int amount;
	string date;
	Transaction transaction;
protected:
	int id;

public:
	Sales(int _id,int salesAmount,string date,Transaction transaction);
	void update(Sales sales,int salesAmount,string date);
	void print() const;
	~Sales();
};

