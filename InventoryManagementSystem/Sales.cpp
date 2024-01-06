#include "Sales.h"



Sales::Sales(int _id,int salesAmount, string date, Transaction transaction)
{
	this->amount = salesAmount;
	this->date = date;
	this->transaction = transaction;
	this->id = _id;
}

void Sales::update(Sales sales, int salesAmount, string date)
{
	sales.date = date;
	sales.amount = salesAmount;
}
void Sales::print() const
{
    cout << "Id: " << id << endl;
    cout << "Detaylar: " << amount << endl;
    cout << "Tarih: " << date << endl;
	cout << "------------------------------------------------------------" << endl;
}

Sales::~Sales()
{
}

