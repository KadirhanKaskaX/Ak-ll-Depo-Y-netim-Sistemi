#pragma once
#include <iostream>
#include "Users.h"
using namespace std;
class Admin:public Users
{
private:
	string userName;
	string password;
};

