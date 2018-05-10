#pragma once
#include <iostream>
#include"ParkedCar.h"
#include"ParkingMeter.h"
#include"PoliceOfficer.h"
#include <iostream>
using namespace std;

class ParkingTicket {
private:
	int fine;
	ParkingMeter PM;
	ParkedCar PC;
	PoliceOfficer PO;

public:
	ParkingTicket();
	ParkingTicket(string aname, string abadge, string amake, string amodel, string acolor, string alicensenumber, int aparkedminutes, int aminutespurchased);
	~ParkingTicket();
	int getfine() const;
	void generateticket();
	void reportCarInfo();
	void reportfine();
	void reportOfficer();

};
