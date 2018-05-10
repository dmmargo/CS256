#pragma once
//#include"ParkedCar.h"
//#include"ParkingTicket.h"
//#include"PoliceOfficer.h"
#include <iostream>
using namespace std;

class ParkingMeter {
private:
	int minutespurchased;
public:
	ParkingMeter();
	ParkingMeter(int);
	~ParkingMeter();
	void setparkingmeter(int);
	int getparkingmeter() const;
};
