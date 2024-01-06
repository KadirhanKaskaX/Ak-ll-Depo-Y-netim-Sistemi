#include "Liquid.h"
#include <iostream>
using namespace std;



Liquid::Liquid(int _Id, string _name, string _price, int _litre)
{
	this->id = _Id;
	this->name = _name;
	this->price = _price;
	this->litre = _litre;
}

void Liquid::print() const
{
	cout << "ID: " << id << std::endl;
	cout << "Ad: " << name << std::endl;
	cout << "Fiyat: " << price << std::endl;
	cout << "Litre: " << litre << std::endl;
	cout << "------------------------------------------------------------" << endl;
}

Liquid::~Liquid()
{
}
