#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class PersonData {
private:
	string lastName;
	string firstName;
	string address;
	string city;
	string state;
	int zip;
	int phone;
public:
	//default constructor
	PersonData()
	{
		lastName = "";
		firstName = "";
		address = "";
		city = "";
		state = "";
		int zip = 0;
		int phone = 0;
	}
	//getters setters 
	void setLastName(string l);
	void setFirstName(string f);
	void setAddress(string a);
	void setCity(string c);
	void setState(string s);
	void setZip(int z);
	void setPhone(int p);

	//geters
	string getLastName();
	string getFirstName();
	string getAddress();
	string getCity();
	string getState();
	int getZip();
	int getPhone();
};

void PersonData::setLastName(string l)
{
	lastName = l;
}
void PersonData::setFirstName(string f)
{
	firstName = f;
}
void PersonData::setAddress(string a)
{
	address = a;
}
void PersonData::setCity(string c)
{
	city = c;
}
void PersonData::setState(string s)
{
	state = s;
}
void PersonData::setZip(int z)
{
	zip = z;
}
void PersonData::setPhone(int p)
{
	phone = p;
}


string PersonData::getLastName()
{
	return lastName;
}
string PersonData::getFirstName()
{
	return firstName;
}
string PersonData::getAddress()
{
	return address;
}
string PersonData::getCity()
{
	return city;
}
string PersonData::getState()
{
	return state;
}
int PersonData::getZip()
{
	return zip;
}
int PersonData::getPhone()
{
	return phone;
}


class CustomerData :public PersonData
{
private: 
	int customerNum;
	bool mailingList;

public: 
	CustomerData()
	{
		customerNum = 0;
		mailingList = false;
	}
	
	void setCustomerNum(int n);
	void setMailingList(bool ml);

	int getCustomerNum();
	bool getMailingList();
};

void CustomerData::setCustomerNum(int n)
{
	customerNum = n;
}
void CustomerData::setMailingList(bool ml)
{
	mailingList = ml;
}

int CustomerData::getCustomerNum()
{
	return customerNum;
}
bool CustomerData::getMailingList()
{
	return mailingList;
}

class PreferedCustomer :public CustomerData
{
private:
	double purchaseAmount;
	double discountLabel;
public: 
	PreferedCustomer()
	{
		purchaseAmount = 0;
		discountLabel = 0;
	}
	void setPurchaseAmount();
	void setDiscountLabel();

	double getPurchaseAmount();
	double getDiscountLabel();
};

void PreferedCustomer::setPurchaseAmount()
{
	double pa;
	cout << "Enter customer spent amount: ";
	cin >> pa;

	purchaseAmount = pa;
}

void PreferedCustomer::setDiscountLabel()
{
	if (purchaseAmount >= 500 && purchaseAmount < 1000) {
		discountLabel = 5;
	}
	else if (purchaseAmount >= 1000 && purchaseAmount < 1500) {
		discountLabel = 6;
	}
	else if (purchaseAmount >= 1500 && purchaseAmount < 2000) {
		discountLabel = 7;
	}
	else if (purchaseAmount >= 2000) {
		discountLabel = 10;
	}
}

double PreferedCustomer::getPurchaseAmount()
{
	return purchaseAmount;
}
double PreferedCustomer::getDiscountLabel()
{
	return discountLabel;
}


void main()
{
	string fname;
	string lname;
	string address;
	string city;
	string state;
	int cusnum;
	int zip;
	int pnum;

	cout << "Customer first name: ";
	cin >> fname;
	cout << "Customer last name: ";
}


