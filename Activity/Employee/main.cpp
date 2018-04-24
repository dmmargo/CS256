#include "stdafx.h"
#include "Employee.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
	Employee Susan("Susan Meyers", 47899, "Accounting", "Vice President");
	Employee Mark("Mark Jones", 39119);
	Employee Joy;

	//Finish Marks info
	Mark.setDepartment("IT");
	Mark.setPosition("Programmer");

	//Creates Joy's information
	Joy.setName("Joy Roger");
	Joy.setIDNumber(81774);
	Joy.setDepartment("Manufacturing");
	Joy.setPosition("Engineer");

	cout << "Name\t\t" << "ID Number\t" << "Department\t" << "Position" << endl;
	cout << Susan.getName() << "\t" << Susan.getIDNumber() << "\t\t" << Susan.getDepartment() << "\t" << Susan.getPosition() << endl;
	cout << Mark.getName() << "\t" << Mark.getIDNumber() << "\t\t" << Mark.getDepartment() << "\t\t" << Mark.getPosition() << endl;
	cout << Joy.getName() << "\t" << Joy.getIDNumber() << "\t\t" << Joy.getDepartment() << "\t" << Joy.getPosition() << endl;
	
	return 0;
}