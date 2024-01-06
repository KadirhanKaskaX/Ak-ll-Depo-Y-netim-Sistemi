#pragma once
#include <iostream>
using namespace std;
class Suppliers
{
private:
	string name;
	string address;
	string contacts;
protected:
	int id;
public:
	Suppliers(int _id,string name,string address,string contacts);
	void update(Suppliers suppliers,string name,string address,string contacts);
	void print() const;
	~Suppliers();
};

