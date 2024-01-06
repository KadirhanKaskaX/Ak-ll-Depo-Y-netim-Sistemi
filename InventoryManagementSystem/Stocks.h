#pragma once
#include <iostream>
using namespace std;
class Stocks
{
private:
	string name;
	string details;
	int stockAmount;
	string number;
protected:
	int id;
public:
	Stocks();
	Stocks(int _id,string name,string number,string details,int _stockAmount);
	void updateStock(Stocks stock,string name,string number,string details);
	void print() const;
	~Stocks();
	int getNumber();
	void setStockAmount(int _stockAmount);
	
};

