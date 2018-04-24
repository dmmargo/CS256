#pragma once
//#indef Employee_H
//#define Employee_H
//ALL THE CODE WE ARE WRITING BELOW
//#endif

#include <string> //this allows me to use string objects
using namespace std;

class Employee {
private:
	string name;
	int idNumber;
	string department;
	string position;



public:
	//3 constructors
	Employee(string nm, int id, string dept, string pos);
	Employee(string nm, int id);
	Employee();


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
