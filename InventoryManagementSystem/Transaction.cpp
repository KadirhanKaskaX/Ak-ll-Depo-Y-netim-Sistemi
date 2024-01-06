#include "Transaction.h"



Transaction::Transaction()
{
	
}

Transaction::Transaction(int _id,string name, string date, bool confirmation)
{
	this->name = name;
	this->date = date;
	this->confirmation = confirmation;
	this->id = _id;
}

void Transaction::print() const
{
	cout << "Islem ID: " << id << endl;
	cout << "Ad: " << name << endl;
	cout << "Tarih: " << date << endl;
	cout << "Onay: " << (confirmation ? "Evet" : "Hayir") << endl;
	cout << "------------------------------------------------------------" << endl;
}

Transaction::~Transaction()
{
}
