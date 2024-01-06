#pragma once
#include "Products.h"
#include <iostream>
class Liquid:public Products
{
private:
	string name;
	string price;
	int litre;
protected:
	int id;
public:
	Liquid(int _Id, string _name, string _price,int _litre);
	void print() const;
	~Liquid();
};

