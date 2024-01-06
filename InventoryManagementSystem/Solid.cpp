#include "Solid.h"


Solid::Solid(int _Id, string _name, string _price, int _kilogram)
{
	this->id = _Id;
	this->name = _name;
	this->price = _price;
	this->kilogram = _kilogram;
}

void Solid::print() const
{
	cout << "Urun ID: " << id << endl;
	cout << "Isim: " << name << endl;
	cout << "Fiyat: " << price << endl;
	cout << "Kilogram: " << kilogram << endl;
	cout << "------------------------------------------------------------" << endl;

}

Solid::~Solid()
{
}
