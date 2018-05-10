#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;
class Ship
{
private:
	string shipName;
	int yearBuilt;
public:
	void setShipName(string sname) {
		shipName = sname;
	}
	void setYear(int yr){
		yearBuilt = yr;
	}
	int get_year(){
		return yearBuilt;
	}
	string getShipName(){
		return shipName;
	}
	Ship(string sname = "", int yr = 0) {
		setShipName(sname);
		setYear(yr);
	}
	void print() {
		cout << "Ship name is " << shipName << " and it was built in year " << yearBuilt << endl;
	}
};

class CruiseShip : public Ship
{
private:
	int maxPassengers;
public:
	CruiseShip(string sname = "", int year = 0, int ppl = 0) :Ship(str, year)
	{
		setPassengers(ppl);
	}
	void setPassengers(int ppl)
	{
		maxPassengers = ppl;
	}
	int getPassengers()
	{
		return maxPassengers;
	}
	void print()
	{
		cout << "Ship name is " << getShipName() << " and maximum number of passengers are " << maxPassengers << endl;
	}
};

class CargoShip : public Ship
{
private:
	int cargo_capacity_in_tonnes;
public:
	CargoShip(string sname = "", int year = 0, int ppl = 0) :Ship(str, year)
	{
		setCapacity(ppl);
	}
	void setCapacity(int ppl)
	{
		cargo_capacity_in_tonnes = ppl;
	}
	int get_capacity()
	{
		return cargo_capacity_in_tonnes;
	}
	void print()
	{
		cout << "Ship name is " << getShipName() << " and its Capacity is " << cargo_capacity_in_tonnes << " Tonnes." << endl;
	}
};
void getUserData(string& shipName, int& yearBuilt)
{
	cout << "Enter Ship name :";
	cin >> shipName;
	cout << endl;
	cout << "Enter year in which ship was built. :";
	cin >> yearBuilt;
	cout << endl;
}
void getUserData_cruise(string& shipName, int& yearBuilt, int& maxPassengers)
{
	getUserData(shipName, yearBuilt);
	cout << "Number of people on Ship:";
	cin >> maxPassengers;
	cout << endl;
}
void getCargoData(string& shipName, int& yearBuilt, int& capacity)
{
	getUserData(shipName, yearBuilt);
	cout << "Ship Capacity:";
	cin >> capacity;
	cout << endl;
}
int main()
{
	string shipName;
	int yearBuilt;
	int maxPassengers;
	int capacity;
	
	getUserData(shipName, yearBuilt);

	Ship object1(shipName, yearBuilt);
	object1.print();
	getUserData(shipName, yearBuilt);
	
	Ship object2;
	object2.setShipName(shipName);
	object2.setYear(yearBuilt);
	object2.print();
	
	//_________________________________________
	
	getUserData_cruise(shipName, yearBuilt, maxPassengers);

	
	CruiseShip cruise_object1(shipName, yearBuilt, maxPassengers);
	cruise_object1.print();
	getUserData_cruise(shipName, yearBuilt, maxPassengers);
	
	
	CruiseShip cruise_object2;
	cruise_object2.setShipName(shipName);
	cruise_object2.setYear(yearBuilt);
	cruise_object2.setPassengers(maxPassengers);
	cruise_object2.print();

	//________________________________________
	
	getCargoData(shipName, yearBuilt, capacity);

	
	CargoShip Cargo_object1(shipName, yearBuilt, capacity);
	Cargo_object1.print();
	getCargoData(shipName, yearBuilt, capacity);

	
	CargoShip Cargo_object2;
	Cargo_object2.setShipName(shipName);
	Cargo_object2.setYear(yearBuilt);
	Cargo_object2.setCapacity(capacity);
	Cargo_object2.print();
	
	return 0;
}
