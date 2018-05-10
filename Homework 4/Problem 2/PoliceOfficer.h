#pragma once
#include <iostream>
#include"ParkingTicket.h"
#include"ParkingMeter.h"
#include"ParkedCar.h"
#include <cstdlib>
using namespace std;

class PoliceOfficer {

private:
	string name;
	string badge;
	ParkingMeter PM;
	ParkedCar PC;


public:
	PoliceOfficer();
	PoliceOfficer(string aname, string abadge, string amake, string amodel, string acolor, string alicensenumber, int aparkedminutes, int aminutespurchased);
	~PoliceOfficer();

	void setname(string);
	void setbadge(string);
	void setOfficer(string, string);

	string getname() const;
	string getbadge() const;

	void patrol();
	void displayofficer() const;
};