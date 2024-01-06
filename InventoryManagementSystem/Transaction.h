#pragma once
#include<iostream>
using namespace std;
class Transaction
{
private:
	string name;
	string date;
	bool confirmation;
protected:
	int id;
public:
	Transaction();
	Transaction(int _id,string name,string date,bool confirmation);
	friend class Customer;
	void print() const;
	~Transaction();

};

