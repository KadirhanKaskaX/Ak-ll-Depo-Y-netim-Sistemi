#include "Stocks.h"




Stocks::Stocks()
{
}

Stocks::Stocks(int _id,string name, string number, string details,int _stockAmount)
{
	this->name = name;
	this->number = number;
	this->details = details;
	this->id = _id;
	this->stockAmount = _stockAmount;
}

void Stocks::updateStock(Stocks stock, string name, string number, string details)
{
	stock.details = details;
	stock.name = name;
	stock.number = number;
}
void Stocks::print() const
{
	cout << "Stock ID: " << id << endl;
	cout << "Ad: " << name << endl;
	cout << "Numara: " << number << endl;
	cout << "Detay: " << details << endl;
	cout << "Stok Miktari: " << stockAmount << endl;
	cout << "------------------------------------------------------------" << endl;
}

Stocks::~Stocks()
{
}

int Stocks::getNumber()
{
	return stockAmount;
}

void Stocks::setStockAmount(int _stockAmount)
{
	stockAmount = _stockAmount;
}
