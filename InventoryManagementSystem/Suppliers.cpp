#include "Suppliers.h"



Suppliers::Suppliers(int _id, string name, string address, string contacts)
{
	this->address = address;
	this->name = name;
	this->contacts = contacts;
	this->id = _id;
}


void Suppliers::update(Suppliers suppliers,string name,string address,string contacts)
{
	suppliers.address = address;
	suppliers.contacts = contacts;
	suppliers.name = name;
	
}
void Suppliers::print() const
{
	cout << "Tedarikci ID: " << id << endl;
	cout << "Ad: " << name << endl;
	cout << "Adres: " << address << endl;
	cout << "Iletisim: " << contacts << endl;
	cout << "------------------------------------------------------------" << endl;
}

Suppliers::~Suppliers()
{
}

