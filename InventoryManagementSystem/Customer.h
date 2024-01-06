#pragma once
#include <iostream>
#include "Transaction.h"
using namespace std;
class Customer
{
private:
	string address;
	Transaction transaction;
	string details;
	int id;
public:
	Customer(int new_id,string _address,Transaction _transaction,string _details);
	void print() const;
	string getAddress();
	string getDetails();
	~Customer();

};

