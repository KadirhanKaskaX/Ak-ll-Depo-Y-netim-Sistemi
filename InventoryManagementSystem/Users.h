#pragma once
#include <iostream>
using namespace std;
class Users
{
private:
	string name;
	string age;
	string contactnum;
protected:
	int id;
	int next_id = 0;
public:
	Users();
	Users(string name,string age,string contactnum);
	void update(Users user,string name,string age,string contactnum);
};

