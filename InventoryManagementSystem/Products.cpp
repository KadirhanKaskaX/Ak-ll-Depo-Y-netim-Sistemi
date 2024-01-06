#include "Products.h"


Products::Products()
{
}

Products::Products(int _Id,string _name, string _price)
{
	name = _name;
	price = _price;
	id = _Id;
}

void Products::update(Products product, string name, string price)
{
	product.name = name;
	product.price = price;

}
void Products::print()  const{
	cout << "Urunler: " << endl;
	cout << "ID: " << id << endl;
	cout << "Urun Ismi: " << name << endl;
	cout << "Fiyat: " << price << endl;
	cout << "------------------------------------------------------------" << endl;

}

Products::~Products()
{
}

