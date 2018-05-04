#include "stdafx.h" 
#include <iostream> 
#include <string>
using namespace std;

class DayOfYear {
private:
	int day;
	string months[12];
	int EndDoM[13];

	static string Month_n;
	static int days_cont;

public:
	DayOfYear(int d);
	void print();
	void setEndDoM();
	void setMonths();
};

string DayOfYear::Month_n = "";
int DayOfYear::days_cont = 0;


DayOfYear::DayOfYear(int d) {
	day = d;
}


void DayOfYear::setEndDoM() {
	
	EndDoM[0] = 0;
	EndDoM[1] = 31;
	EndDoM[2] = 59;
	EndDoM[3] = 90;
	EndDoM[4] = 120;
	EndDoM[5] = 151;
	EndDoM[6] = 181;
	EndDoM[7] = 212;
	EndDoM[8] = 243;
	EndDoM[9] = 273;
	EndDoM[10] = 304;
	EndDoM[11] = 334;
	EndDoM[12] = 365;
	//int EndDoM[] = { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};
}


void DayOfYear::setMonths() {
	months[0] = "January";
	months[1] = "Febuarary";
	months[2] = "March";
	months[3] = "April";
	months[4] = "May";
	months[5] = "June";
	months[6] = "July";
	months[7] = "August";
	months[8] = "September";
	months[9] = "October";
	months[10] = "November";
	months[11] = "December"; 
	//string months[12] = {"January", "Febuary", "March", "April", "May", "June", "August", "October", "November", "December" };
}


void DayOfYear::print() {
	int month = 0;
	while (EndDoM[month] < day) {
		month++;
	}
	Month_n += months[month - 1];
	days_cont += day - EndDoM[month - 1];
	cout << "\nDay: " << day << " would be " << Month_n << " " << days_cont << endl;
}

int main() {
	int dayInput;
	cout << "Enter a number between 1 - 365: ";
	cin >> dayInput;
	while (dayInput < 1 || dayInput >365) {
		cout << "Invalid number try again." << endl;
		cout << "Enter a number between 1 - 365: ";
		cin >> dayInput;
	}


	DayOfYear userDay(dayInput);
	userDay.setMonths();
	userDay.setEndDoM();
	userDay.print();
	return 0;
}


