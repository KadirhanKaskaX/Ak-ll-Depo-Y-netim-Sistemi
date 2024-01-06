#pragma once
#include <iostream>
using namespace std;
class Products
{
private:
	string name;
	string price;
protected:
	int id;
public:
	Products();
	Products(int _Id,string _name,string _price);
	void update(Products product, string name, string price);
	void print() const;
	~Products();
};

