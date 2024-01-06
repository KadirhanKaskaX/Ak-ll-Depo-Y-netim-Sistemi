#include "Users.h"



Users::Users()
{
	next_id++;
	id = next_id;
}

Users::Users(string name, string age, string contactnum)
{
	name = name;
	age = age;
	contactnum = contactnum;
	next_id++;
	id = next_id;
}

void Users::update(Users user, string name, string age, string contactnum)
{
	user.age = age;
	user.contactnum = contactnum;
	user.name = name;
}
