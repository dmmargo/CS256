//Diane Margo
//CS256
//05/24/2018 

#include "stdafx.h"
#include <exception>
#include <iostream> 
#include <string>
using namespace std;
class Employee {
private:
	string name;
	int idNumber;
	string department;
	string position;



public:
	//3 constructors
	Employee();
	Employee(string nm, int id);
	Employee(string nm, int id, string dept, string pos);
	// Exception class 
	class InvalidEmployeeNumber { };


	// setters or accessors
	void setName(string nm);
	void setIDNumber(int id);
	void setDepartment(string dept);
	void setPosition(string pos);


	//getters or mutators
	string getName();
	int getIDNumber();
	string getDepartment();
	string getPosition();

};

class ProductionWorker {
private:
	int shift;
	double payrate;
public:
	ProductionWorker(int s, double pr);
	ProductionWorker();

	// Exception class 
	class InvalidShift { };
	class InvalidPayRate { };

	// setters or accessors
	void setShift(int s);
	void setPayRate(double pr);

	//getters or mutators
	int getShift();
	double getPayRate();
};

//Constructors
ProductionWorker::ProductionWorker(int s, double pr) {
	shift = s;
	payrate = pr;
}
ProductionWorker::ProductionWorker() {
	shift = 0;
	payrate = 0;
}


Employee::Employee()
{
	name = "";
	idNumber = 0;
	department = "";
	position = "";
}

Employee::Employee(string nm, int id)
{
	name = nm;
	idNumber = id;
	department = "";
	position = "";

}

Employee::Employee(string nm, int id, string dept, string pos)
{
	name = nm;
	idNumber = id;
	department = dept;
	position = pos;
}

//Setters
void Employee::setName(string nm)
{
	name = nm;
}
void Employee::setIDNumber(int id)
{
	if (id > 0 && id < 9999)
		idNumber = id;
	else
		throw InvalidEmployeeNumber();
}
void Employee::setDepartment(string dept)
{
	department = dept;
}
void Employee::setPosition(string pos)
{
	position = pos;
}
void ProductionWorker::setShift(int s)
{
	if (s > 0 && s < 3)
		shift = s;
	else
		throw InvalidShift();
}
void ProductionWorker::setPayRate(double pr)
{
	if (pr < 0)
		payrate = pr;
	else
		throw InvalidPayRate();
}
//Getters
string Employee::getName()
{
	return name;
}
int Employee::getIDNumber()
{
	return idNumber;

}
string Employee::getDepartment()
{
	return department;

}
string Employee::getPosition()
{
	return position;
}

int ProductionWorker::getShift()
{
	return int();
}

double ProductionWorker::getPayRate()
{
	return 0;
}



int main() {
	bool tryAgain = true; // Flag to re-read input 
	bool tryAgain1 = true;
	bool tryAgain2 = true;

	//Employee Susan("Susan Meyers", 47899, "Accounting", "Vice President");
	//Employee Mark("Mark Jones", 39119);
	Employee Joy;

	//Creates Joy's information
	string name;
	int idNumber = 81774;
	string department;
	string position;
	int shift;


	cout << "Enter name: ";
	cin >> name;
	Joy.setName(name);

	cout << "enter id nummber: ";
	cin >> idNumber;
	while (tryAgain)
	{
		try
		{
			Joy.setIDNumber(idNumber);
			// If no exception was thrown, then the 
			// next statement will execute. 
			tryAgain = false;
		}
		catch (Employee::InvalidEmployeeNumber)
		{
			cout << "enter valid id number: ";
			cin >> idNumber;
		}
	}
	//Joy.setIDNumber(idNumber);

	cout << "enter hire date: ";
	cin >> department;
	Joy.setDepartment(department);

	cout << "enter position: ";
	cin >> position;
	Joy.setPosition(position);


	ProductionWorker pworker;

	cout << "enter shift: ";
	cin >> shift;
	while (tryAgain1)
	{
		try
		{
			pworker.setShift(shift);
			// If no exception was thrown, then the 
			// next statement will execute. 
			tryAgain1 = false;
		}
		catch (ProductionWorker::InvalidShift)
		{
			cout << "enter valid shift (enter 1 or 2): ";
			cin >> shift;
		}
	}
	cout << "";

	double payrate;

	cout << "enter payrate: ";
	cin >> payrate;
	while (tryAgain2)
	{
		try
		{
			pworker.setPayRate(payrate);
			// If no exception was thrown, then the 
			// next statement will execute. 
			tryAgain2 = false;
		}
		catch (ProductionWorker::InvalidShift)
		{
			cout << "enter valid shift: ";
			cin >> payrate;
		}
	}


	cout << "\nName\t\t" << "ID Number\t" << "HireDatet\t" << "Position\t" << "Shift\t\t" << "PayRate" << endl;
	cout << Joy.getName() << "\t\t" << Joy.getIDNumber() << "\t\t" << Joy.getDepartment() << "\t\t" << Joy.getPosition() << "\t\t" << pworker.getShift() << "\t\t" << pworker.getPayRate() << "\t\t" << endl;

	return 0;
}