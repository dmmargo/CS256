#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;
class Ship
{
private:
	string ship_name;
	int year_built;
public:
	void set_ship_name(string str)
	{
		ship_name = str;
	}
	void set_year(int y)
	{
		year_built = y;
	}
	int get_year()
	{
		return year_built;
	}
	string get_ship_name()
	{
		return ship_name;
	}
	Ship(string str = "", int y = 0)
	{
		set_ship_name(str);
		set_year(y);
	}
	void print()
	{
		cout << "Ship name is " << ship_name << " and it was built in year " << year_built << endl;
	}
};

class CruiseShip : public Ship
{
private:
	int max_passengers;
public:
	CruiseShip(string str = "", int year = 0, int pass = 0) :Ship(str, year)
	{
		set_passengers(pass);
	}
	void set_passengers(int pass)
	{
		max_passengers = pass;
	}
	int get_passengers()
	{
		return max_passengers;
	}
	void print()
	{
		cout << "Ship name is " << get_ship_name() << " and maximum number of passengers are " << max_passengers << endl;
	}
};

class CargoShip : public Ship
{
private:
	int cargo_capacity_in_tonnes;
public:
	CargoShip(string str = "", int year = 0, int pass = 0) :Ship(str, year)
	{
		set_capacity(pass);
	}
	void set_capacity(int pass)
	{
		cargo_capacity_in_tonnes = pass;
	}
	int get_capacity()
	{
		return cargo_capacity_in_tonnes;
	}
	void print()
	{
		cout << "Ship name is " << get_ship_name() << " and its Capacity is " << cargo_capacity_in_tonnes << " Tonnes." << endl;
	}
};
void get_user_data(string& ship_name, int& year_built)
{
	cout << "Enter Ship name :";
	cin >> ship_name;
	cout << endl;
	cout << "Enter year in which ship was built. :";
	cin >> year_built;
	cout << endl;
}
void get_user_data_cruise(string& ship_name, int& year_built, int& max_passengers)
{
	get_user_data(ship_name, year_built);
	cout << "Enter no of passengers on ship :";
	cin >> max_passengers;
	cout << endl;
}
void get_user_data_cargo(string& ship_name, int& year_built, int& capacity)
{
	get_user_data(ship_name, year_built);
	cout << "Enter the capacity of ship. :";
	cin >> capacity;
	cout << endl;
}
int main()
{
	string ship_name;
	int year_built;
	int max_passengers;
	int capacity;
	//start building Ships now..
	get_user_data(ship_name, year_built);
	//built object 1
	Ship object1(ship_name, year_built);
	object1.print();
	get_user_data(ship_name, year_built);
	//built object 1
	Ship object2;
	object2.set_ship_name(ship_name);
	object2.set_year(year_built);
	object2.print();
	//start building Cruise Ships now..
	get_user_data_cruise(ship_name, year_built, max_passengers);
	//built object 1
	CruiseShip cruise_object1(ship_name, year_built, max_passengers);
	cruise_object1.print();
	get_user_data_cruise(ship_name, year_built, max_passengers);
	//built object 2
	CruiseShip cruise_object2;
	cruise_object2.set_ship_name(ship_name);
	cruise_object2.set_year(year_built);
	cruise_object2.set_passengers(max_passengers);
	cruise_object2.print();
	//start building Cargo Ships now..
	get_user_data_cargo(ship_name, year_built, capacity);
	//built object 1
	CargoShip Cargo_object1(ship_name, year_built, capacity);
	Cargo_object1.print();
	get_user_data_cargo(ship_name, year_built, capacity);
	//built object 2
	CargoShip Cargo_object2;
	Cargo_object2.set_ship_name(ship_name);
	Cargo_object2.set_year(year_built);
	Cargo_object2.set_capacity(capacity);
	Cargo_object2.print();
	//system("pause");
	return 0;
}
