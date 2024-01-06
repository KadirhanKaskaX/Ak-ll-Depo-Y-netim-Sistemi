#include "Customer.h"


Customer::Customer(int _new_id,string _address, Transaction _transaction, string _details)
{
	address = _address;
	transaction = _transaction;
	details = _details;
	id = _new_id;


}
string Customer::getAddress()
{
	return address;
}
string Customer::getDetails()
{
	return details;
}




void Customer::print() const  {
	cout << "Musteriler: " << endl;
	cout << "Id: " << id << endl;
	cout << "Adres: " << address << endl;
	cout << "Detay: " << details << endl;
	cout << "------------------------------------------------------------" << endl;

}
Customer::~Customer() {

};
