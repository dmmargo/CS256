//Diane Margo
//CS256

#include "stdafx.h" 
#include <iostream> 
#include <string>
using namespace std;
void checkDayInMonthValue(string month, int day);

class DayOfYear { //problem 1
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
	//missing static
};

class DayofYear2 { //problem 2
private:
	string year_month;
	int year_day;

	string months[12];
	int EndDoM[13];

	static int Date_n;
public:
	DayofYear2(string m2, int d2);
	void print();
	void setMonths2();
	void setEndDoM2();
};

string DayOfYear::Month_n = ""; //problem 1
int DayOfYear::days_cont = 0;

int DayofYear2::Date_n = 0; //problem 2

DayOfYear::DayOfYear(int d) {// problem 1
	day = d;
}
DayofYear2::DayofYear2(string m2, int d2) { //problem 2
	year_month = m2;
	year_day = d2;
}

void DayOfYear::setEndDoM() { //problem 1
	
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
}
void DayOfYear::setMonths() { //problem 1
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
}

void DayofYear2::setMonths2() { //problem 2
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
}
void DayofYear2::setEndDoM2() { //problem 2
	
	//EndDoM[0] = 0;
	EndDoM[0] = 31;
	EndDoM[1] = 28;
	EndDoM[2] = 31;
	EndDoM[3] = 30;
	EndDoM[4] = 31;
	EndDoM[5] = 30;
	EndDoM[6] = 31;
	EndDoM[7] = 31;
	EndDoM[8] = 30;
	EndDoM[9] = 31;
	EndDoM[10] = 30;
	EndDoM[11] = 31;
}
void checkDayInMonthValid(string month, int day) {
	int index;
	int monthDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (month.compare("December") == 0)
		index = 11;
	else if (month.compare("November") == 0)
		index = 10;
	else if (month.compare("October") == 0)
		index = 9;
	else if (month.compare("September") == 0)
		index = 8;
	else if (month.compare("August") == 0)
		index = 7;
	else if (month.compare("July") == 0)
		index = 6;
	else if (month.compare("June") == 0)
		index = 5;
	else if (month.compare("May") == 0)
		index = 6;
	else if (month.compare("April") == 0)
		index = 5;
	else if (month.compare("March") == 0)
		index = 4;
	else if (month.compare("April") == 0)
		index = 3;
	else if (month.compare("March") == 0)
		index = 2;
	else if (month.compare("Febuary") == 0)
		index = 1;
	else if (month.compare("January") == 0)
		index = 0;
	if (day > monthDays[index] || day > 31 || day < 1) {
		cout << "Invalid Day.Program Terminated.\n";
		exit(0);
	}
}

void DayOfYear::print() { //problem 1
	int month = 0;
	while (EndDoM[month] < day) {
		month++;
	}
	Month_n += months[month - 1];
	days_cont += day - EndDoM[month - 1];
	cout << "\nDay: " << day << " would be " << Month_n << " " << days_cont << endl;
}

void DayofYear2::print() { //problem 2
	int monthDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int index;
	if (year_month.compare("December") == 0)
		index = 11;
	else if (year_month.compare("November") == 0)
		index = 10;
	else if (year_month.compare("October") == 0)
		index = 9;
	else if (year_month.compare("September") == 0)
		index = 8;
	else if (year_month.compare("August") == 0)
		index = 7;
	else if (year_month.compare("July") == 0)
		index = 6;
	else if (year_month.compare("June") == 0)
		index = 5;
	else if (year_month.compare("May") == 0)
		index = 6;
	else if (year_month.compare("April") == 0)
		index = 5;
	else if (year_month.compare("March") == 0)
		index = 4;
	else if (year_month.compare("April") == 0)
		index = 3;
	else if (year_month.compare("March") == 0)
		index = 2;
	else if (year_month.compare("Febuary") == 0)
		index = 1;
	else if (year_month.compare("January") == 0)
		index = 0;

	int sum = 0;
	//cout << "the index is: " << index << endl; 
	for (int i = 0; i < index; i++)
		sum += monthDays[i];
	sum += year_day;
	cout << "\nThe day of the year " << year_month << ", " << year_day << " is: " << sum << "\n";
	
}
int main() {
	int input;

	cout << "Enter: \n1. get month and day from day in year. \n";
	cout << "2. get day in year from month and day input. \n";
	cout << "3. quit\n";

	cout << "user input: ";

	cin >> input;
	do {
		if (input == 1) {
			int dayInput;
			cout << "Enter a number between 1 - 365: ";
			cin >> dayInput;
			while(dayInput < 1 || dayInput >365) {
				cout << "Invalid number try again." << endl;
				cout << "Enter a number between 1 - 365: ";
				cin >> dayInput;
			}


			DayOfYear userDay(dayInput);
			userDay.setMonths();
			userDay.setEndDoM();
			userDay.print();
			break;
		}
		else if (input == 2) {
			string month2;
			int day2;
			cout << "Please input a month (capital first letter): \n";
			cin >> month2;

			cout << "Please input a day 1-31:\n";
			cin >> day2;


			checkDayInMonthValid(month2, day2);


			DayofYear2 userDay2(month2, day2);
			userDay2.setEndDoM2();
			userDay2.print();
			break;
			
		}
		else if (input == 3)
		{
			exit(0);
		}
		else if (input != 1 || input != 2 || input != 3) {
			cout << "invalid input, try again\n";
			cout << "Enter: \n1. get month and day from day in year. \n";
			cout << "2. get day in year from month and day input. \n";
			cout << "3. quit\n";

			cout << "user input: ";
			cin >> input;

		}
	} while (input != 1 || input != 2 || input != 3);
		return 0;

}



