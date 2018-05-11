#include "stdafx.h"
#include <iostream> 
#include <string> 
using namespace std;

class ParkedCar {
private:
	string make;
	int model;
	string color;
	string licenseNumber;
	int minP;
public:
	ParkedCar() {
		make = "";
		model = 0;
		color = "";
		licenseNumber = "";
		minP = 0;
	}
	//setters
	void setMake(string mk) {
		make = mk;
	}
	void setModel(int mod) {
		model = mod;
	}
	void setColor(string col) {
		color = col;
	}
	void setLicenseNumber(string l) {
		licenseNumber = l;
	}
	void setMinutes(int min) {
		minP = min;
	}
	//getters
	string getMake() {
		return make;
	}
	int getModel() {
		return model;
	}
	string getColor() {
		return color;
	}
	string getLicenseNumber() {
		return licenseNumber;
	}
	int getMinutes() {
		return minP;
	}


	void print() {
		cout << "Input the following car Info: " << endl;
		cout << "make: " << getMake() << endl;
		cout << "model: " << getModel() << endl;
		cout << "license number: " << getLicenseNumber() << endl;
		cout << "color:" << getColor() << endl;
	}

};


class ParkingMeter :public ParkedCar {
private:
	int minutesPurchased;
public:
	ParkingMeter() {
		minutesPurchased = 0;
	}
	//setter
	void setMinutesPurchase(int inputMinute) {
		minutesPurchased = inputMinute;
	}
	//getter
	int getMinutesPurchase() {
		return minutesPurchased;
	}


	void print() {
		cout << "number of minutes parked: " << getMinutesPurchase() << endl;
	}
};


class ParkingTicket :public ParkedCar {
private:
	int minP;
	int fine;
public:
	void getTicket(int inputMinute) {
		minP = inputMinute;
		if ((minP / 60) <= 0) {
			fine = 25;
		}
		else {
			int hoursP = minP / 60;
			fine = 25 + (10 * (hoursP));
		}
	}

	int getFineGive() {
		return fine;
	}
	void print() {
		cout << "Illegally parked: " << minP << " minutes parked" << endl;
		cout << "Fine amount: $" << fine << endl;
	}
};


class PoliceOfficer :public ParkingTicket {
private:
	string police;
	int badgeNumber;

public:
	PoliceOfficer() {
		police = "";
		badgeNumber = 0;
	}
	//setters
	void setPoliceName(string pn) {
		police = pn;
	}
	void setBadgeNumber(int bn) {
		badgeNumber = bn;
	}
	//getters
	string getPoliceName() {
		return police;
	}
	int getBadgeNumber() {
		return badgeNumber;
	}
};

int main() {
	string name;
	int badge;
	PoliceOfficer officerInfo;

	cout << "Information: " << endl;
	cout << "$25 for the first 60 min illegally parked and $10 every hour after" << endl;

	cout << "Please enter your information" << endl;
	cout << "Police Name: ";
	cin >> name;
	officerInfo.setPoliceName(name);

	cout << "Badge number: ";
	cin >> badge;
	officerInfo.setBadgeNumber(badge);

	ParkingMeter parkingInfo;

	string inputS;
	int inputN;

	cout << "Enter the following Car's Info: " << endl;
	cout << "make: ";
	cin >> inputS;
	parkingInfo.setMake(inputS);

	cout << "model: ";
	cin >> inputN;
	parkingInfo.setModel(inputN);

	cout << "color: ";
	cin >> inputS;
	parkingInfo.setColor(inputS);

	cout << "license number: ";
	cin >> inputS;
	parkingInfo.setLicenseNumber(inputS);

	cout << "Illegal minutes parked: ";
	cin >> inputN;
	parkingInfo.setMinutes(inputN);


	cout << endl;


	ParkingTicket ticketInfo;

	cout << "Fine: " << endl;
	ticketInfo.getTicket(parkingInfo.getMinutes());
	ticketInfo.print();



	cout << "Car Information: " << endl;
	cout << "Make: " << parkingInfo.getMake() << endl;
	cout << "Model: " << parkingInfo.getModel() << endl;
	cout << "License Number: " << parkingInfo.getLicenseNumber() << endl;
	cout << "Color:" << parkingInfo.getColor() << endl;


	cout << "Police Information: " << endl;
	cout << "Police: " << officerInfo.getPoliceName() << endl;
	cout << "Badge Number: " << officerInfo.getBadgeNumber() << endl;


	return 0;
}