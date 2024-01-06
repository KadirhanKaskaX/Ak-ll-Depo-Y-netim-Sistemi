#pragma once
#include <iostream>
#include "Products.h"
class Solid:public Products
{
private:
	string name;
	string price;
	int kilogram;
protected:
	int id;
public:

	Solid(int _Id, string _name, string _price, int _kilogram);
	void print() const;
	~Solid();
};

